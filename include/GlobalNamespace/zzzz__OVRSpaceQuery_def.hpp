#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace GlobalNamespace {
struct GlobalNamespace__OVRSpace__StorageLocation;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRPlugin__SpaceComponentType;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRPlugin__SpaceQueryType;
}
namespace System {
struct Guid;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRPlugin__SpaceQueryActionType;
}
// Forward declare root types
namespace GlobalNamespace {
struct GlobalNamespace__OVRSpaceQuery__ComponentType;
}
namespace GlobalNamespace {
class OVRSpaceQuery;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRSpaceQuery__Options;
}
// Type: ::ComponentType
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8840))
// CS Name: OVRSpaceQuery::ComponentType
struct CORDL_TYPE GlobalNamespace__OVRSpaceQuery__ComponentType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__OVRSpaceQuery__ComponentType(uint32_t value__) noexcept;


                    constexpr GlobalNamespace__OVRSpaceQuery__ComponentType(GlobalNamespace__OVRSpaceQuery__ComponentType const&) = default;
                    constexpr GlobalNamespace__OVRSpaceQuery__ComponentType(GlobalNamespace__OVRSpaceQuery__ComponentType&&) = default;
                    constexpr GlobalNamespace__OVRSpaceQuery__ComponentType& operator=(GlobalNamespace__OVRSpaceQuery__ComponentType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__OVRSpaceQuery__ComponentType& operator=(GlobalNamespace__OVRSpaceQuery__ComponentType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OVRSpaceQuery__ComponentType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__OVRSpaceQuery__ComponentType_Unwrapped : uint32_t {
__None = 0u,
__Locatable = 1u,
__Storable = 2u,
__Sharable = 4u,
__Bounded2D = 8u,
__Bounded3D = 16u,
__SemanticLabels = 32u,
__RoomLayout = 64u,
__SpaceContainer = 128u,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__OVRSpaceQuery__ComponentType_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__OVRSpaceQuery__ComponentType_Unwrapped>(__instance);
}


// Fields

 uint32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(uint32_t value) ;

constexpr uint32_t __get_value__() const;

/// @brief Field None offset 0
static GlobalNamespace::GlobalNamespace__OVRSpaceQuery__ComponentType const None;

/// @brief Field Locatable offset 0
static GlobalNamespace::GlobalNamespace__OVRSpaceQuery__ComponentType const Locatable;

/// @brief Field Storable offset 0
static GlobalNamespace::GlobalNamespace__OVRSpaceQuery__ComponentType const Storable;

/// @brief Field Sharable offset 0
static GlobalNamespace::GlobalNamespace__OVRSpaceQuery__ComponentType const Sharable;

/// @brief Field Bounded2D offset 0
static GlobalNamespace::GlobalNamespace__OVRSpaceQuery__ComponentType const Bounded2D;

/// @brief Field Bounded3D offset 0
static GlobalNamespace::GlobalNamespace__OVRSpaceQuery__ComponentType const Bounded3D;

/// @brief Field SemanticLabels offset 0
static GlobalNamespace::GlobalNamespace__OVRSpaceQuery__ComponentType const SemanticLabels;

/// @brief Field RoomLayout offset 0
static GlobalNamespace::GlobalNamespace__OVRSpaceQuery__ComponentType const RoomLayout;

/// @brief Field SpaceContainer offset 0
static GlobalNamespace::GlobalNamespace__OVRSpaceQuery__ComponentType const SpaceContainer;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::Options
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8841))
// CS Name: OVRSpaceQuery::Options
struct CORDL_TYPE GlobalNamespace__OVRSpaceQuery__Options : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "_MaxResults_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_Timeout_k__BackingField", ty: "double_t", modifiers: "", def_value: None }, CppParam { name: "_Location_k__BackingField", ty: "GlobalNamespace::GlobalNamespace__OVRSpace__StorageLocation", modifiers: "", def_value: None }, CppParam { name: "_QueryType_k__BackingField", ty: "GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceQueryType", modifiers: "", def_value: None }, CppParam { name: "_ActionType_k__BackingField", ty: "GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceQueryActionType", modifiers: "", def_value: None }, CppParam { name: "_componentFilter", ty: "GlobalNamespace::GlobalNamespace__OVRSpaceQuery__ComponentType", modifiers: "", def_value: None }, CppParam { name: "_uuidFilter", ty: "System::Collections::Generic::IEnumerable_1<System::Guid>", modifiers: "", def_value: None }]
constexpr GlobalNamespace__OVRSpaceQuery__Options(int32_t _MaxResults_k__BackingField, double_t _Timeout_k__BackingField, GlobalNamespace::GlobalNamespace__OVRSpace__StorageLocation _Location_k__BackingField, GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceQueryType _QueryType_k__BackingField, GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceQueryActionType _ActionType_k__BackingField, GlobalNamespace::GlobalNamespace__OVRSpaceQuery__ComponentType _componentFilter, System::Collections::Generic::IEnumerable_1<System::Guid> _uuidFilter) noexcept;


                    constexpr GlobalNamespace__OVRSpaceQuery__Options(GlobalNamespace__OVRSpaceQuery__Options const&) = default;
                    constexpr GlobalNamespace__OVRSpaceQuery__Options(GlobalNamespace__OVRSpaceQuery__Options&&) = default;
                    constexpr GlobalNamespace__OVRSpaceQuery__Options& operator=(GlobalNamespace__OVRSpaceQuery__Options const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__OVRSpaceQuery__Options& operator=(GlobalNamespace__OVRSpaceQuery__Options&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x28};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OVRSpaceQuery__Options(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

/// @brief Field MaxUuidCount offset 0
static constexpr int32_t  MaxUuidCount{1024};

static ::ArrayW<System::Guid> __declspec(property(get=__get_Ids, put=__set_Ids))  Ids;

static void __set_Ids(::ArrayW<System::Guid> value) ;

static ::ArrayW<System::Guid> __get_Ids() ;

static ::ArrayW<GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceComponentType> __declspec(property(get=__get_ComponentTypes, put=__set_ComponentTypes))  ComponentTypes;

static void __set_ComponentTypes(::ArrayW<GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceComponentType> value) ;

static ::ArrayW<GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceComponentType> __get_ComponentTypes() ;

 int32_t __declspec(property(get=__get__MaxResults_k__BackingField, put=__set__MaxResults_k__BackingField))  _MaxResults_k__BackingField;

constexpr void __set__MaxResults_k__BackingField(int32_t value) ;

constexpr int32_t __get__MaxResults_k__BackingField() const;

 double_t __declspec(property(get=__get__Timeout_k__BackingField, put=__set__Timeout_k__BackingField))  _Timeout_k__BackingField;

constexpr void __set__Timeout_k__BackingField(double_t value) ;

constexpr double_t __get__Timeout_k__BackingField() const;

 GlobalNamespace::GlobalNamespace__OVRSpace__StorageLocation __declspec(property(get=__get__Location_k__BackingField, put=__set__Location_k__BackingField))  _Location_k__BackingField;

constexpr void __set__Location_k__BackingField(GlobalNamespace::GlobalNamespace__OVRSpace__StorageLocation value) ;

constexpr GlobalNamespace::GlobalNamespace__OVRSpace__StorageLocation __get__Location_k__BackingField() const;

 GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceQueryType __declspec(property(get=__get__QueryType_k__BackingField, put=__set__QueryType_k__BackingField))  _QueryType_k__BackingField;

constexpr void __set__QueryType_k__BackingField(GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceQueryType value) ;

constexpr GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceQueryType __get__QueryType_k__BackingField() const;

 GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceQueryActionType __declspec(property(get=__get__ActionType_k__BackingField, put=__set__ActionType_k__BackingField))  _ActionType_k__BackingField;

constexpr void __set__ActionType_k__BackingField(GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceQueryActionType value) ;

constexpr GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceQueryActionType __get__ActionType_k__BackingField() const;

 GlobalNamespace::GlobalNamespace__OVRSpaceQuery__ComponentType __declspec(property(get=__get__componentFilter, put=__set__componentFilter))  _componentFilter;

constexpr void __set__componentFilter(GlobalNamespace::GlobalNamespace__OVRSpaceQuery__ComponentType value) ;

constexpr GlobalNamespace::GlobalNamespace__OVRSpaceQuery__ComponentType __get__componentFilter() const;

 System::Collections::Generic::IEnumerable_1<System::Guid> __declspec(property(get=__get__uuidFilter, put=__set__uuidFilter))  _uuidFilter;

constexpr void __set__uuidFilter(System::Collections::Generic::IEnumerable_1<System::Guid> value) ;

constexpr System::Collections::Generic::IEnumerable_1<System::Guid> __get__uuidFilter() const;


// Properties

 int32_t __declspec(property(get=get_MaxResults, put=set_MaxResults))  MaxResults;

 double_t __declspec(property(get=get_Timeout, put=set_Timeout))  Timeout;

 GlobalNamespace::GlobalNamespace__OVRSpace__StorageLocation __declspec(property(get=get_Location, put=set_Location))  Location;

 GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceQueryType __declspec(property(get=get_QueryType, put=set_QueryType))  QueryType;

 GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceQueryActionType __declspec(property(get=get_ActionType, put=set_ActionType))  ActionType;

 GlobalNamespace::GlobalNamespace__OVRSpaceQuery__ComponentType __declspec(property(get=get_ComponentFilter, put=set_ComponentFilter))  ComponentFilter;

 System::Collections::Generic::IEnumerable_1<System::Guid> __declspec(property(get=get_UuidFilter, put=set_UuidFilter))  UuidFilter;


// Methods

/// @brief Method get_MaxResults addr 0x260cd20 size 0x8 virtual false final false
 int32_t get_MaxResults() ;

/// @brief Method set_MaxResults addr 0x260cd28 size 0x8 virtual false final false
 void set_MaxResults(int32_t value) ;

/// @brief Method get_Timeout addr 0x260cd30 size 0x8 virtual false final false
 double_t get_Timeout() ;

/// @brief Method set_Timeout addr 0x260cd38 size 0x8 virtual false final false
 void set_Timeout(double_t value) ;

/// @brief Method get_Location addr 0x260cd40 size 0x8 virtual false final false
 GlobalNamespace::GlobalNamespace__OVRSpace__StorageLocation get_Location() ;

/// @brief Method set_Location addr 0x260cd48 size 0x8 virtual false final false
 void set_Location(GlobalNamespace::GlobalNamespace__OVRSpace__StorageLocation value) ;

/// @brief Method get_QueryType addr 0x260cd50 size 0x8 virtual false final false
 GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceQueryType get_QueryType() ;

/// @brief Method set_QueryType addr 0x260cd58 size 0x8 virtual false final false
 void set_QueryType(GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceQueryType value) ;

/// @brief Method get_ActionType addr 0x260cd60 size 0x8 virtual false final false
 GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceQueryActionType get_ActionType() ;

/// @brief Method set_ActionType addr 0x260cd68 size 0x8 virtual false final false
 void set_ActionType(GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceQueryActionType value) ;

/// @brief Method get_ComponentFilter addr 0x260cd70 size 0x8 virtual false final false
 GlobalNamespace::GlobalNamespace__OVRSpaceQuery__ComponentType get_ComponentFilter() ;

/// @brief Method set_ComponentFilter addr 0x260640c size 0x104 virtual false final false
 void set_ComponentFilter(GlobalNamespace::GlobalNamespace__OVRSpaceQuery__ComponentType value) ;

/// @brief Method get_UuidFilter addr 0x260cd78 size 0x8 virtual false final false
 System::Collections::Generic::IEnumerable_1<System::Guid> get_UuidFilter() ;

/// @brief Method set_UuidFilter addr 0x2606208 size 0x204 virtual false final false
 void set_UuidFilter(System::Collections::Generic::IEnumerable_1<System::Guid> value) ;

/// @brief Method .ctor addr 0x260cd80 size 0x34 virtual false final false
 void _ctor(GlobalNamespace::GlobalNamespace__OVRSpaceQuery__Options other) ;

/// @brief Method TryQuerySpaces addr 0x2606510 size 0x968 virtual false final false
 bool TryQuerySpaces(ByRef<uint64_t> requestId) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::OVRSpaceQuery
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8842))
// CS Name: OVRSpaceQuery
class CORDL_TYPE OVRSpaceQuery : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using Options = GlobalNamespace::GlobalNamespace__OVRSpaceQuery__Options;

using ComponentType = GlobalNamespace::GlobalNamespace__OVRSpaceQuery__ComponentType;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~OVRSpaceQuery() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRSpaceQuery", modifiers: " const&", def_value: None }]
constexpr OVRSpaceQuery(OVRSpaceQuery const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRSpaceQuery", modifiers: "&&", def_value: None }]
constexpr OVRSpaceQuery(OVRSpaceQuery&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVRSpaceQuery(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr OVRSpaceQuery& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVRSpaceQuery& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVRSpaceQuery& operator=(OVRSpaceQuery&& o) noexcept = default;
  constexpr OVRSpaceQuery& operator=(OVRSpaceQuery const& o) noexcept = default;
                

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OVRSpaceQuery__ComponentType, "", "OVRSpaceQuery/ComponentType");
NEED_NO_BOX(GlobalNamespace::OVRSpaceQuery);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRSpaceQuery, "", "OVRSpaceQuery");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OVRSpaceQuery__Options, "", "OVRSpaceQuery/Options");
