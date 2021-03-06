/* -*- c++ -*- */
/* 
 * Copyright 2018 Ashish Chaudhari.
 * 
 * This is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3, or (at your option)
 * any later version.
 * 
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this software; see the file COPYING.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street,
 * Boston, MA 02110-1301, USA.
 */


#ifndef INCLUDED_GUITAR_IIR_INTERPOLATOR_H
#define INCLUDED_GUITAR_IIR_INTERPOLATOR_H

#include <guitar/api.h>
#include <gnuradio/sync_interpolator.h>

namespace gr {
  namespace guitar {

    /*!
     * \brief <+description of block+>
     * \ingroup guitar
     *
     */
    class GUITAR_API iir_interpolator : virtual public gr::sync_interpolator
    {
     public:
      typedef boost::shared_ptr<iir_interpolator> sptr;

      /*!
       * \brief Return a shared_ptr to a new instance of guitar::iir_interpolator.
       *
       * To avoid accidental use of raw pointers, guitar::iir_interpolator's
       * constructor is in a private implementation
       * class. guitar::iir_interpolator::make is the public interface for
       * creating new instances.
       */
      static sptr make(int interpolation, const std::vector<double> &fftaps, const std::vector<double> &fbtaps);

      virtual void set_taps(const std::vector<double> &fftaps, const std::vector<double> &fbtaps) = 0;
    };

  } // namespace guitar
} // namespace gr

#endif /* INCLUDED_GUITAR_IIR_INTERPOLATOR_H */

