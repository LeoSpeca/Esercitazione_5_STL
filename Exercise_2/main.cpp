#include "PolygonalMesh.hpp"
#include "Utils.hpp"
#include <iostream>

int main() {
    // Inizializza un oggetto PolygonalMesh
    PolygonalMesh mesh;

    // Carica la mesh dai file CSV
    if (mesh.loadMesh("Cell0Ds.csv", "Cell1Ds.csv", "Cell2Ds.csv")) {
        std::cout << "Mesh caricata con successo.\n";
        // Esegui test di proprietà o altre operazioni qui
    } else {
        std::cerr << "Impossibile caricare la mesh.\n";
        return 1;
    }

    return 0;
}
