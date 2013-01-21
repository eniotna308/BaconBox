/**
 * @file
 */
#ifndef BB_MeshComponent_H
#define BB_MeshComponent_H
#include <vector>
#include "BaconBox/Vector2.h"
#include "BaconBox/Core/Component.h"
#include "BaconBox/StandardVertexArray.h"

namespace BaconBox {
	/**
	 * 
	 */
	class Mesh  : public Component {
    public:
		static int ID;
		
		Mesh();
		
		StandardVertexArray &getVertices();
		
		/**
		 * Gets the vertices relative to the entity's position.
		 * @return Array of vertices with their positions relative to the 
		 * entity's position.
		 */
		const StandardVertexArray getRelativeVertices() const;
		
		virtual int getID() const;
		
		virtual void receiveMessage(int senderID, int destID, int message, void *data);
    private:
		StandardVertexArray vertices;
	};
}

#endif // BB_MeshComponent_H
