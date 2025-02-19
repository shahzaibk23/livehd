//  This file is distributed under the BSD 3-Clause License. See LICENSE for details.

#pragma once

#include "AnnLayout.hpp"
#include "GeogLayout.hpp"
#include "absl/container/flat_hash_map.h"
#include "floorplanner.hpp"
#include "lgedgeiter.hpp"
#include "node_pin.hpp"

class Node_hier_floorp : public Lhd_floorplanner {
public:
  Node_hier_floorp(Node_tree&& nt_arg);
  void load() override;

private:
  // load all the nodes in a given lgraph into an ArchFP geogLayout instance and return that instance
  FPContainer* load_lg_nodes(const absl::flat_hash_map<Node::Compact, GeographyHint>& hint_map, Lgraph* lg,
                             const lh::Tree_index tidx);
};
