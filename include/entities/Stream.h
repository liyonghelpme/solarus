/*
 * Copyright (C) 2006-2014 Christopho, Solarus - http://www.solarus-games.org
 * 
 * Solarus is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * Solarus is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License along
 * with this program. If not, see <http://www.gnu.org/licenses/>.
 */
#ifndef SOLARUS_STREAM_H
#define SOLARUS_STREAM_H

#include "Common.h"
#include "entities/Detector.h"

namespace solarus {

/**
 * \brief A special terrain where the hero is moved towards a specific
 * direction.
 *
 * The hero may or may not resist to the movement of the stream, depending
 * on its properties.
 */
class Stream: public Detector {

  public:

    Stream(const std::string& name, Layer layer, int x, int y,
        int direction);
    ~Stream();

    EntityType get_type() const;

    bool is_obstacle_for(MapEntity& other);
    void notify_collision(MapEntity& entity_overlapping, CollisionMode collision_mode);

};

}

#endif
