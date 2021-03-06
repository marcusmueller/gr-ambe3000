/* -*- c++ -*- */
/* 
 * Copyright 2016 Thomas Early AC2IE.
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

#ifndef INCLUDED_AMBE3000_BIT_REVERSE_BB_IMPL_H
#define INCLUDED_AMBE3000_BIT_REVERSE_BB_IMPL_H

#include <ambe3000/bit_reverse_bb.h>

namespace gr {
  namespace ambe3000 {

    class bit_reverse_bb_impl : public bit_reverse_bb
    {
     private:
      // Nothing to declare in this block.

     public:
      bit_reverse_bb_impl();
      ~bit_reverse_bb_impl();

      // Where all the action really happens
      int work(int noutput_items,
         gr_vector_const_void_star &input_items,
         gr_vector_void_star &output_items);
    };

  } // namespace ambe3000
} // namespace gr

#endif /* INCLUDED_AMBE3000_BIT_REVERSE_BB_IMPL_H */

