import java.util.*;
import java.util.stream.Collectors;
public class WorldAnalyzerApp {
    private final WorldDao worldDao;
    public WorldAnalyzerApp() {
        this.worldDao = InMemoryWorldDao.getInstance();
    }
    // 1. Highest populated city of each country
    public Map<String, City> findHighestPopulatedCityPerCountry() {
        return worldDao.findAllCountries().stream()
                .filter(c -> c.getCities() != null && !c.getCities().isEmpty())
                .collect(Collectors.toMap(
				Country::getName,
				c -> c.getCities().stream()
				.max(Comparator.comparingInt(City::getPopulation))
                .orElse(null)
                ));
    }

    // 2. Most populated city of each continent (safe)
    public Map<String, City> findMostPopulatedCityPerContinent() {
        Map<String, City> result = new HashMap<>();
        for (String continent : worldDao.getAllContinents()) {
            City city = worldDao.findCountriesByContinent(continent).stream()
            .flatMap(c -> c.getCities().stream())
            .max(Comparator.comparingInt(City::getPopulation))
            .orElse(null);
            if (city != null) {
                result.put(continent, city);
            }
        }
        return result;
    }

    // 3. Highest populated capital city
    public City findHighestPopulatedCapital() {
        return worldDao.findAllCountries().stream()
        .flatMap(c -> c.getCities().stream()
        .filter(city -> city.getId() == c.getCapital()))
        .max(Comparator.comparingInt(City::getPopulation))
        .orElse(null);
    }

    // Display results (SIMPLE PRINTING)
    public void displayResults() {

        System.out.println("=== Highest Populated City of Each Country ===");
        findHighestPopulatedCityPerCountry().forEach((country, city) ->
                System.out.println(country + " -> " +
                        city.getName() + " (" + city.getPopulation() + ")")
        );

        System.out.println("\n=== Most Populated City of Each Continent ===");
        findMostPopulatedCityPerContinent().forEach((continent, city) -> {
            Country country = worldDao.findCountryByCode(city.getCountryCode());
            System.out.println(continent + " -> " +
                    city.getName() + ", " +
                    country.getName() + " (" +
                    city.getPopulation() + ")");
        });

        System.out.println("\n=== Highest Populated Capital City ===");
        City capital = findHighestPopulatedCapital();
        if (capital != null) {
            Country country = worldDao.findCountryByCode(capital.getCountryCode());
            System.out.println("City: " + capital.getName());
            System.out.println("Country: " + country.getName());
            System.out.println("Continent: " + country.getContinent());
            System.out.println("Population: " + capital.getPopulation());
        }
    }

    public static void main(String[] args) {
        new WorldAnalyzerApp().displayResults();
    }
}
