#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace HoudiniEngineUnity {
class HEU_MeshData;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
class IComparable_1;
}
namespace HoudiniEngineUnity {
class HEU_VertexEntry;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_GeoGroup;
}
// Type: HoudiniEngineUnity::HEU_GeoGroup
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9776))
// CS Name: HoudiniEngineUnity.HEU_GeoGroup
class CORDL_TYPE HEU_GeoGroup : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::System::IComparable_1<::HoudiniEngineUnity::HEU_GeoGroup>
constexpr operator  ::System::IComparable_1<::HoudiniEngineUnity::HEU_GeoGroup>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~HEU_GeoGroup() = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_GeoGroup", modifiers: " const&", def_value: None }]
constexpr HEU_GeoGroup(HEU_GeoGroup const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_GeoGroup", modifiers: "&&", def_value: None }]
constexpr HEU_GeoGroup(HEU_GeoGroup&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HEU_GeoGroup(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HEU_GeoGroup& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HEU_GeoGroup& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HEU_GeoGroup& operator=(HEU_GeoGroup&& o) noexcept = default;
  constexpr HEU_GeoGroup& operator=(HEU_GeoGroup const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__groupName, put=__set__groupName))  _groupName;

constexpr void __set__groupName(::StringW value) ;

constexpr ::StringW __get__groupName() const;

 ::System::Collections::Generic::Dictionary_2<int32_t,::HoudiniEngineUnity::HEU_MeshData> __declspec(property(get=__get__subMeshesMap, put=__set__subMeshesMap))  _subMeshesMap;

constexpr void __set__subMeshesMap(::System::Collections::Generic::Dictionary_2<int32_t,::HoudiniEngineUnity::HEU_MeshData> value) ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::HoudiniEngineUnity::HEU_MeshData> __get__subMeshesMap() const;

 ::ArrayW<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VertexEntry>> __declspec(property(get=__get__sharedNormalIndices, put=__set__sharedNormalIndices))  _sharedNormalIndices;

constexpr void __set__sharedNormalIndices(::ArrayW<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VertexEntry>> value) ;

constexpr ::ArrayW<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VertexEntry>> __get__sharedNormalIndices() const;


// Methods

/// @brief Method CompareTo addr 0x2053dc0 size 0x30 virtual true final true
 int32_t CompareTo(::HoudiniEngineUnity::HEU_GeoGroup other) ;

/// @brief Method SetupNormalIndices addr 0x2051914 size 0x120 virtual false final false
 void SetupNormalIndices(int32_t indicesCount) ;

// Ctor Parameters []
explicit HEU_GeoGroup() ;

/// @brief Method .ctor addr 0x2051898 size 0x7c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
} // end anonymous namespace
NEED_NO_BOX(::HoudiniEngineUnity::HEU_GeoGroup);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_GeoGroup, "HoudiniEngineUnity", "HEU_GeoGroup");
