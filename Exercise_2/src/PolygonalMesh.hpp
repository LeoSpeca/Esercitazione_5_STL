#ifndef POLYGONAL_MESH_HPP
#define POLYGONAL_MESH_HPP

#include <vector>
#include <string>

// Definizione delle strutture per rappresentare gli elementi della mesh
struct Cell0D {
    int id;
    int marker;
    double x;
    double y;
};

struct Cell1D {
    int id;
    int marker;
    int origin;
    int end;
};

struct Cell2D {
    int id;
    int marker;
    int numVertices;
    std::vector<int> vertices;
    int numEdges;
    std::vector<int> edges;
};

// Definizione di una classe per rappresentare la mesh poligonale
class PolygonalMesh {
public:
    // Costruttore
    PolygonalMesh() {}

    // Distruttore
    ~PolygonalMesh() {}

    // Funzione per caricare la mesh da file CSV
    bool loadMesh(const std::string& cell0DFile, const std::string& cell1DFile, const std::string& cell2DFile) {
        // Implementazione della funzione loadMesh
        // Ritorna true se il caricamento ha successo, altrimenti false
        return true;
    }

    // Aggiungere altre funzioni membro pubbliche se necessario per operazioni sulla mesh e test di proprietà

private:
    std::vector<Cell0D> cell0Ds;
    std::vector<Cell1D> cell1Ds;
    std::vector<Cell2D> cell2Ds;

    // Aggiungere funzioni membro private se necessario per elaborare i dati della mesh
};

#endif // POLYGONAL_MESH_HPP

