#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace HoudiniEngineUnity {
class HEU_TOPNodeData;
}
namespace HoudiniEngineUnity {
class TOPNodeTags;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_TOPNetworkData;
}
// Type: HoudiniEngineUnity::HEU_TOPNetworkData
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9711))
// CS Name: HoudiniEngineUnity.HEU_TOPNetworkData
class CORDL_TYPE HEU_TOPNetworkData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~HEU_TOPNetworkData() = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_TOPNetworkData", modifiers: " const&", def_value: None }]
constexpr HEU_TOPNetworkData(HEU_TOPNetworkData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_TOPNetworkData", modifiers: "&&", def_value: None }]
constexpr HEU_TOPNetworkData(HEU_TOPNetworkData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HEU_TOPNetworkData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HEU_TOPNetworkData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HEU_TOPNetworkData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HEU_TOPNetworkData& operator=(HEU_TOPNetworkData&& o) noexcept = default;
  constexpr HEU_TOPNetworkData& operator=(HEU_TOPNetworkData const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get__nodeID, put=__set__nodeID))  _nodeID;

constexpr void __set__nodeID(int32_t value) ;

constexpr int32_t __get__nodeID() const;

 ::StringW __declspec(property(get=__get__nodeName, put=__set__nodeName))  _nodeName;

constexpr void __set__nodeName(::StringW value) ;

constexpr ::StringW __get__nodeName() const;

 System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_TOPNodeData> __declspec(property(get=__get__topNodes, put=__set__topNodes))  _topNodes;

constexpr void __set__topNodes(System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_TOPNodeData> value) ;

constexpr System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_TOPNodeData> __get__topNodes() const;

 ::ArrayW<::StringW> __declspec(property(get=__get__topNodeNames, put=__set__topNodeNames))  _topNodeNames;

constexpr void __set__topNodeNames(::ArrayW<::StringW> value) ;

constexpr ::ArrayW<::StringW> __get__topNodeNames() const;

 int32_t __declspec(property(get=__get__selectedTOPIndex, put=__set__selectedTOPIndex))  _selectedTOPIndex;

constexpr void __set__selectedTOPIndex(int32_t value) ;

constexpr int32_t __get__selectedTOPIndex() const;

 ::StringW __declspec(property(get=__get__parentName, put=__set__parentName))  _parentName;

constexpr void __set__parentName(::StringW value) ;

constexpr ::StringW __get__parentName() const;

 HoudiniEngineUnity::TOPNodeTags __declspec(property(get=__get__tags, put=__set__tags))  _tags;

constexpr void __set__tags(HoudiniEngineUnity::TOPNodeTags value) ;

constexpr HoudiniEngineUnity::TOPNodeTags __get__tags() const;


// Methods

// Ctor Parameters []
explicit HEU_TOPNetworkData() ;

/// @brief Method .ctor addr 0x20290f8 size 0xd8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
NEED_NO_BOX(HoudiniEngineUnity::HEU_TOPNetworkData);
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HEU_TOPNetworkData, "HoudiniEngineUnity", "HEU_TOPNetworkData");
