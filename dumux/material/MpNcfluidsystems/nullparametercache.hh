/*****************************************************************************
 *   Copyright (C) 2011 by Andreas Lauser                                    *
 *   Institute of Hydraulic Engineering                                      *
 *   University of Stuttgart, Germany                                        *
 *   email: <givenname>.<name>@iws.uni-stuttgart.de                          *
 *                                                                           *
 *   This program is free software: you can redistribute it and/or modify    *
 *   it under the terms of the GNU General Public License as published by    *
 *   the Free Software Foundation, either version 2 of the License, or       *
 *   (at your option) any later version.                                     *
 *                                                                           *
 *   This program is distributed in the hope that it will be useful,         *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of          *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the           *
 *   GNU General Public License for more details.                            *
 *                                                                           *
 *   You should have received a copy of the GNU General Public License       *
 *   along with this program.  If not, see <http://www.gnu.org/licenses/>.   *
 *****************************************************************************/
/*!
 * \file
 *
 * \brief The a parameter cache which does nothing
 */
#ifndef DUMUX_NULL_PARAMETER_CACHE_HH
#define DUMUX_NULL_PARAMETER_CACHE_HH

#include "parametercachebase.hh"

namespace Dumux
{
/*!
 * \brief The a parameter cache which does nothing
 */
class NullParameterCache : public ParameterCacheBase<NullParameterCache>
{
public:
    NullParameterCache() 
    {};
    
    template <class FluidState>
    void updateAll(const FluidState &fs)
    {
    };
    
    /*!
     * \brief Update all cached parameters of a specific fluid phase
     */
    template <class FluidState>
    void updatePhase(const FluidState &fs, int phaseIdx)
    {};
};

} // end namepace

#endif
