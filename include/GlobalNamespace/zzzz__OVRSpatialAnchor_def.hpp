#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace System {
template<typename T>
class Comparison_1;
}
namespace GlobalNamespace {
struct OVRSpaceUser;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRSpatialAnchor__OperationResult;
}
namespace System::Collections::Generic {
template<typename T>
class ICollection_1;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRSpatialAnchor__LoadOptions;
}
namespace System {
struct Guid;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRSpatialAnchor__MultiAnchorActionType;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRPlugin__SpaceComponentType;
}
namespace System {
template<typename T>
class Action_1;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRSpatialAnchor__UnboundAnchor;
}
namespace GlobalNamespace {
class GlobalNamespace__OVRSpatialAnchor____c;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRSpatialAnchor__SingleAnchorDelegatePair;
}
namespace GlobalNamespace {
class GlobalNamespace__OVRSpatialAnchor__Development;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRSpatialAnchor__EraseOptions;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRSpace__StorageLocation;
}
namespace GlobalNamespace {
struct OVRPose;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRPlugin__SpaceStorageLocation;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRSpatialAnchor__SaveOptions;
}
namespace GlobalNamespace {
struct OVRSpace;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRSpatialAnchor__MultiAnchorDelegatePair;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRSpaceQuery__Options;
}
namespace UnityEngine {
struct Pose;
}
// Forward declare root types
namespace GlobalNamespace {
struct GlobalNamespace__OVRSpatialAnchor__MultiAnchorActionType;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRSpatialAnchor__OperationResult;
}
namespace GlobalNamespace {
class GlobalNamespace__OVRSpatialAnchor__Development;
}
namespace GlobalNamespace {
class GlobalNamespace__OVRSpatialAnchor____c;
}
namespace GlobalNamespace {
class OVRSpatialAnchor;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRSpatialAnchor__EraseOptions;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRSpatialAnchor__LoadOptions;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRSpatialAnchor__MultiAnchorDelegatePair;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRSpatialAnchor__SaveOptions;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRSpatialAnchor__SingleAnchorDelegatePair;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRSpatialAnchor__UnboundAnchor;
}
// Type: ::SingleAnchorDelegatePair
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8843))
// CS Name: OVRSpatialAnchor::SingleAnchorDelegatePair
struct CORDL_TYPE GlobalNamespace__OVRSpatialAnchor__SingleAnchorDelegatePair : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "Anchor", ty: "GlobalNamespace::OVRSpatialAnchor", modifiers: "", def_value: None }, CppParam { name: "Delegate", ty: "System::Action_2<GlobalNamespace::OVRSpatialAnchor,bool>", modifiers: "", def_value: None }]
constexpr GlobalNamespace__OVRSpatialAnchor__SingleAnchorDelegatePair(GlobalNamespace::OVRSpatialAnchor Anchor, System::Action_2<GlobalNamespace::OVRSpatialAnchor,bool> Delegate) noexcept;


                    constexpr GlobalNamespace__OVRSpatialAnchor__SingleAnchorDelegatePair(GlobalNamespace__OVRSpatialAnchor__SingleAnchorDelegatePair const&) = default;
                    constexpr GlobalNamespace__OVRSpatialAnchor__SingleAnchorDelegatePair(GlobalNamespace__OVRSpatialAnchor__SingleAnchorDelegatePair&&) = default;
                    constexpr GlobalNamespace__OVRSpatialAnchor__SingleAnchorDelegatePair& operator=(GlobalNamespace__OVRSpatialAnchor__SingleAnchorDelegatePair const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__OVRSpatialAnchor__SingleAnchorDelegatePair& operator=(GlobalNamespace__OVRSpatialAnchor__SingleAnchorDelegatePair&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OVRSpatialAnchor__SingleAnchorDelegatePair(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 GlobalNamespace::OVRSpatialAnchor __declspec(property(get=__get_Anchor, put=__set_Anchor))  Anchor;

constexpr void __set_Anchor(GlobalNamespace::OVRSpatialAnchor value) ;

constexpr GlobalNamespace::OVRSpatialAnchor __get_Anchor() const;

 System::Action_2<GlobalNamespace::OVRSpatialAnchor,bool> __declspec(property(get=__get_Delegate, put=__set_Delegate))  Delegate;

constexpr void __set_Delegate(System::Action_2<GlobalNamespace::OVRSpatialAnchor,bool> value) ;

constexpr System::Action_2<GlobalNamespace::OVRSpatialAnchor,bool> __get_Delegate() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::MultiAnchorDelegatePair
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8844))
// CS Name: OVRSpatialAnchor::MultiAnchorDelegatePair
struct CORDL_TYPE GlobalNamespace__OVRSpatialAnchor__MultiAnchorDelegatePair : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "Anchors", ty: "System::Collections::Generic::List_1<GlobalNamespace::OVRSpatialAnchor>", modifiers: "", def_value: None }, CppParam { name: "Delegate", ty: "System::Action_2<System::Collections::Generic::ICollection_1<GlobalNamespace::OVRSpatialAnchor>,GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__OperationResult>", modifiers: "", def_value: None }]
constexpr GlobalNamespace__OVRSpatialAnchor__MultiAnchorDelegatePair(System::Collections::Generic::List_1<GlobalNamespace::OVRSpatialAnchor> Anchors, System::Action_2<System::Collections::Generic::ICollection_1<GlobalNamespace::OVRSpatialAnchor>,GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__OperationResult> Delegate) noexcept;


                    constexpr GlobalNamespace__OVRSpatialAnchor__MultiAnchorDelegatePair(GlobalNamespace__OVRSpatialAnchor__MultiAnchorDelegatePair const&) = default;
                    constexpr GlobalNamespace__OVRSpatialAnchor__MultiAnchorDelegatePair(GlobalNamespace__OVRSpatialAnchor__MultiAnchorDelegatePair&&) = default;
                    constexpr GlobalNamespace__OVRSpatialAnchor__MultiAnchorDelegatePair& operator=(GlobalNamespace__OVRSpatialAnchor__MultiAnchorDelegatePair const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__OVRSpatialAnchor__MultiAnchorDelegatePair& operator=(GlobalNamespace__OVRSpatialAnchor__MultiAnchorDelegatePair&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OVRSpatialAnchor__MultiAnchorDelegatePair(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 System::Collections::Generic::List_1<GlobalNamespace::OVRSpatialAnchor> __declspec(property(get=__get_Anchors, put=__set_Anchors))  Anchors;

constexpr void __set_Anchors(System::Collections::Generic::List_1<GlobalNamespace::OVRSpatialAnchor> value) ;

constexpr System::Collections::Generic::List_1<GlobalNamespace::OVRSpatialAnchor> __get_Anchors() const;

 System::Action_2<System::Collections::Generic::ICollection_1<GlobalNamespace::OVRSpatialAnchor>,GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__OperationResult> __declspec(property(get=__get_Delegate, put=__set_Delegate))  Delegate;

constexpr void __set_Delegate(System::Action_2<System::Collections::Generic::ICollection_1<GlobalNamespace::OVRSpatialAnchor>,GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__OperationResult> value) ;

constexpr System::Action_2<System::Collections::Generic::ICollection_1<GlobalNamespace::OVRSpatialAnchor>,GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__OperationResult> __get_Delegate() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::LoadOptions
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8845))
// CS Name: OVRSpatialAnchor::LoadOptions
struct CORDL_TYPE GlobalNamespace__OVRSpatialAnchor__LoadOptions : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "_StorageLocation_k__BackingField", ty: "GlobalNamespace::GlobalNamespace__OVRSpace__StorageLocation", modifiers: "", def_value: None }, CppParam { name: "_MaxAnchorCount_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_Timeout_k__BackingField", ty: "double_t", modifiers: "", def_value: None }, CppParam { name: "_uuids", ty: "System::Collections::Generic::IReadOnlyList_1<System::Guid>", modifiers: "", def_value: None }]
constexpr GlobalNamespace__OVRSpatialAnchor__LoadOptions(GlobalNamespace::GlobalNamespace__OVRSpace__StorageLocation _StorageLocation_k__BackingField, int32_t _MaxAnchorCount_k__BackingField, double_t _Timeout_k__BackingField, System::Collections::Generic::IReadOnlyList_1<System::Guid> _uuids) noexcept;


                    constexpr GlobalNamespace__OVRSpatialAnchor__LoadOptions(GlobalNamespace__OVRSpatialAnchor__LoadOptions const&) = default;
                    constexpr GlobalNamespace__OVRSpatialAnchor__LoadOptions(GlobalNamespace__OVRSpatialAnchor__LoadOptions&&) = default;
                    constexpr GlobalNamespace__OVRSpatialAnchor__LoadOptions& operator=(GlobalNamespace__OVRSpatialAnchor__LoadOptions const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__OVRSpatialAnchor__LoadOptions& operator=(GlobalNamespace__OVRSpatialAnchor__LoadOptions&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OVRSpatialAnchor__LoadOptions(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

/// @brief Field MaxSupported offset 0
static constexpr int32_t  MaxSupported{1024};

 GlobalNamespace::GlobalNamespace__OVRSpace__StorageLocation __declspec(property(get=__get__StorageLocation_k__BackingField, put=__set__StorageLocation_k__BackingField))  _StorageLocation_k__BackingField;

constexpr void __set__StorageLocation_k__BackingField(GlobalNamespace::GlobalNamespace__OVRSpace__StorageLocation value) ;

constexpr GlobalNamespace::GlobalNamespace__OVRSpace__StorageLocation __get__StorageLocation_k__BackingField() const;

 int32_t __declspec(property(get=__get__MaxAnchorCount_k__BackingField, put=__set__MaxAnchorCount_k__BackingField))  _MaxAnchorCount_k__BackingField;

constexpr void __set__MaxAnchorCount_k__BackingField(int32_t value) ;

constexpr int32_t __get__MaxAnchorCount_k__BackingField() const;

 double_t __declspec(property(get=__get__Timeout_k__BackingField, put=__set__Timeout_k__BackingField))  _Timeout_k__BackingField;

constexpr void __set__Timeout_k__BackingField(double_t value) ;

constexpr double_t __get__Timeout_k__BackingField() const;

 System::Collections::Generic::IReadOnlyList_1<System::Guid> __declspec(property(get=__get__uuids, put=__set__uuids))  _uuids;

constexpr void __set__uuids(System::Collections::Generic::IReadOnlyList_1<System::Guid> value) ;

constexpr System::Collections::Generic::IReadOnlyList_1<System::Guid> __get__uuids() const;


// Properties

 GlobalNamespace::GlobalNamespace__OVRSpace__StorageLocation __declspec(property(get=get_StorageLocation, put=set_StorageLocation))  StorageLocation;

 int32_t __declspec(property(get=get_MaxAnchorCount, put=set_MaxAnchorCount))  MaxAnchorCount;

 double_t __declspec(property(get=get_Timeout, put=set_Timeout))  Timeout;

 System::Collections::Generic::IReadOnlyList_1<System::Guid> __declspec(property(get=get_Uuids, put=set_Uuids))  Uuids;


// Methods

/// @brief Method get_StorageLocation addr 0x2611cb8 size 0x8 virtual false final false
 GlobalNamespace::GlobalNamespace__OVRSpace__StorageLocation get_StorageLocation() ;

/// @brief Method set_StorageLocation addr 0x2611cc0 size 0x8 virtual false final false
 void set_StorageLocation(GlobalNamespace::GlobalNamespace__OVRSpace__StorageLocation value) ;

/// @brief Method get_MaxAnchorCount addr 0x2611cc8 size 0x8 virtual false final false
 int32_t get_MaxAnchorCount() ;

/// @brief Method set_MaxAnchorCount addr 0x2611cd0 size 0x8 virtual false final false
 void set_MaxAnchorCount(int32_t value) ;

/// @brief Method get_Timeout addr 0x2611cd8 size 0x8 virtual false final false
 double_t get_Timeout() ;

/// @brief Method set_Timeout addr 0x2611ce0 size 0x8 virtual false final false
 void set_Timeout(double_t value) ;

/// @brief Method get_Uuids addr 0x2611ce8 size 0x8 virtual false final false
 System::Collections::Generic::IReadOnlyList_1<System::Guid> get_Uuids() ;

/// @brief Method set_Uuids addr 0x2611cf0 size 0x184 virtual false final false
 void set_Uuids(System::Collections::Generic::IReadOnlyList_1<System::Guid> value) ;

/// @brief Method ToQueryOptions addr 0x26111dc size 0x110 virtual false final false
 GlobalNamespace::GlobalNamespace__OVRSpaceQuery__Options ToQueryOptions() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::UnboundAnchor
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8846))
// CS Name: OVRSpatialAnchor::UnboundAnchor
struct CORDL_TYPE GlobalNamespace__OVRSpatialAnchor__UnboundAnchor : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "_space", ty: "GlobalNamespace::OVRSpace", modifiers: "", def_value: None }, CppParam { name: "_Uuid_k__BackingField", ty: "System::Guid", modifiers: "", def_value: None }]
constexpr GlobalNamespace__OVRSpatialAnchor__UnboundAnchor(GlobalNamespace::OVRSpace _space, System::Guid _Uuid_k__BackingField) noexcept;


                    constexpr GlobalNamespace__OVRSpatialAnchor__UnboundAnchor(GlobalNamespace__OVRSpatialAnchor__UnboundAnchor const&) = default;
                    constexpr GlobalNamespace__OVRSpatialAnchor__UnboundAnchor(GlobalNamespace__OVRSpatialAnchor__UnboundAnchor&&) = default;
                    constexpr GlobalNamespace__OVRSpatialAnchor__UnboundAnchor& operator=(GlobalNamespace__OVRSpatialAnchor__UnboundAnchor const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__OVRSpatialAnchor__UnboundAnchor& operator=(GlobalNamespace__OVRSpatialAnchor__UnboundAnchor&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OVRSpatialAnchor__UnboundAnchor(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 GlobalNamespace::OVRSpace __declspec(property(get=__get__space, put=__set__space))  _space;

constexpr void __set__space(GlobalNamespace::OVRSpace value) ;

constexpr GlobalNamespace::OVRSpace __get__space() const;

 System::Guid __declspec(property(get=__get__Uuid_k__BackingField, put=__set__Uuid_k__BackingField))  _Uuid_k__BackingField;

constexpr void __set__Uuid_k__BackingField(System::Guid value) ;

constexpr System::Guid __get__Uuid_k__BackingField() const;


// Properties

 System::Guid __declspec(property(get=get_Uuid))  Uuid;

 bool __declspec(property(get=get_Localized))  Localized;

 bool __declspec(property(get=get_Localizing))  Localizing;

 UnityEngine::Pose __declspec(property(get=get_Pose))  Pose;


// Methods

/// @brief Method get_Uuid addr 0x2611e74 size 0xc virtual false final false
 System::Guid get_Uuid() ;

/// @brief Method get_Localized addr 0x2611e80 size 0x88 virtual false final false
 bool get_Localized() ;

/// @brief Method get_Localizing addr 0x2611f08 size 0x94 virtual false final false
 bool get_Localizing() ;

/// @brief Method get_Pose addr 0x2611f9c size 0x124 virtual false final false
 UnityEngine::Pose get_Pose() ;

/// @brief Method Localize addr 0x26120c0 size 0x2c0 virtual false final false
 void Localize(System::Action_2<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__UnboundAnchor,bool> onComplete, double_t timeout) ;

/// @brief Method BindTo addr 0x2612380 size 0x340 virtual false final false
 void BindTo(GlobalNamespace::OVRSpatialAnchor spatialAnchor) ;

/// @brief Method .ctor addr 0x2611a64 size 0xc virtual false final false
 void _ctor(GlobalNamespace::OVRSpace space, System::Guid uuid) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::MultiAnchorActionType
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8847))
// CS Name: OVRSpatialAnchor::MultiAnchorActionType
struct CORDL_TYPE GlobalNamespace__OVRSpatialAnchor__MultiAnchorActionType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__OVRSpatialAnchor__MultiAnchorActionType(int32_t value__) noexcept;


                    constexpr GlobalNamespace__OVRSpatialAnchor__MultiAnchorActionType(GlobalNamespace__OVRSpatialAnchor__MultiAnchorActionType const&) = default;
                    constexpr GlobalNamespace__OVRSpatialAnchor__MultiAnchorActionType(GlobalNamespace__OVRSpatialAnchor__MultiAnchorActionType&&) = default;
                    constexpr GlobalNamespace__OVRSpatialAnchor__MultiAnchorActionType& operator=(GlobalNamespace__OVRSpatialAnchor__MultiAnchorActionType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__OVRSpatialAnchor__MultiAnchorActionType& operator=(GlobalNamespace__OVRSpatialAnchor__MultiAnchorActionType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OVRSpatialAnchor__MultiAnchorActionType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__OVRSpatialAnchor__MultiAnchorActionType_Unwrapped : int32_t {
__Save = 0,
__Share = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__OVRSpatialAnchor__MultiAnchorActionType_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__OVRSpatialAnchor__MultiAnchorActionType_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Save offset 0
static GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__MultiAnchorActionType const Save;

/// @brief Field Share offset 0
static GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__MultiAnchorActionType const Share;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::Development
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8848))
// CS Name: OVRSpatialAnchor::Development
class CORDL_TYPE GlobalNamespace__OVRSpatialAnchor__Development : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GlobalNamespace__OVRSpatialAnchor__Development() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__OVRSpatialAnchor__Development", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__OVRSpatialAnchor__Development(GlobalNamespace__OVRSpatialAnchor__Development const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__OVRSpatialAnchor__Development", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__OVRSpatialAnchor__Development(GlobalNamespace__OVRSpatialAnchor__Development&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OVRSpatialAnchor__Development(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__OVRSpatialAnchor__Development& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__OVRSpatialAnchor__Development& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__OVRSpatialAnchor__Development& operator=(GlobalNamespace__OVRSpatialAnchor__Development&& o) noexcept = default;
  constexpr GlobalNamespace__OVRSpatialAnchor__Development& operator=(GlobalNamespace__OVRSpatialAnchor__Development const& o) noexcept = default;
                


// Methods

/// @brief Method Log addr 0x26126c0 size 0x8c virtual false final false
static void Log(::StringW message) ;

/// @brief Method LogWarning addr 0x261274c size 0x8c virtual false final false
static void LogWarning(::StringW message) ;

/// @brief Method LogError addr 0x26127d8 size 0x8c virtual false final false
static void LogError(::StringW message) ;

/// @brief Method LogRequest addr 0x2612864 size 0x4 virtual false final false
static void LogRequest(uint64_t requestId, ::StringW message) ;

/// @brief Method LogRequestResult addr 0x2612868 size 0x4 virtual false final false
static void LogRequestResult(uint64_t requestId, bool result, ::StringW successMessage, ::StringW failureMessage) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::SaveOptions
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8849))
// CS Name: OVRSpatialAnchor::SaveOptions
struct CORDL_TYPE GlobalNamespace__OVRSpatialAnchor__SaveOptions : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "Storage", ty: "GlobalNamespace::GlobalNamespace__OVRSpace__StorageLocation", modifiers: "", def_value: None }]
constexpr GlobalNamespace__OVRSpatialAnchor__SaveOptions(GlobalNamespace::GlobalNamespace__OVRSpace__StorageLocation Storage) noexcept;


                    constexpr GlobalNamespace__OVRSpatialAnchor__SaveOptions(GlobalNamespace__OVRSpatialAnchor__SaveOptions const&) = default;
                    constexpr GlobalNamespace__OVRSpatialAnchor__SaveOptions(GlobalNamespace__OVRSpatialAnchor__SaveOptions&&) = default;
                    constexpr GlobalNamespace__OVRSpatialAnchor__SaveOptions& operator=(GlobalNamespace__OVRSpatialAnchor__SaveOptions const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__OVRSpatialAnchor__SaveOptions& operator=(GlobalNamespace__OVRSpatialAnchor__SaveOptions&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OVRSpatialAnchor__SaveOptions(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 GlobalNamespace::GlobalNamespace__OVRSpace__StorageLocation __declspec(property(get=__get_Storage, put=__set_Storage))  Storage;

constexpr void __set_Storage(GlobalNamespace::GlobalNamespace__OVRSpace__StorageLocation value) ;

constexpr GlobalNamespace::GlobalNamespace__OVRSpace__StorageLocation __get_Storage() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::EraseOptions
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8850))
// CS Name: OVRSpatialAnchor::EraseOptions
struct CORDL_TYPE GlobalNamespace__OVRSpatialAnchor__EraseOptions : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "Storage", ty: "GlobalNamespace::GlobalNamespace__OVRSpace__StorageLocation", modifiers: "", def_value: None }]
constexpr GlobalNamespace__OVRSpatialAnchor__EraseOptions(GlobalNamespace::GlobalNamespace__OVRSpace__StorageLocation Storage) noexcept;


                    constexpr GlobalNamespace__OVRSpatialAnchor__EraseOptions(GlobalNamespace__OVRSpatialAnchor__EraseOptions const&) = default;
                    constexpr GlobalNamespace__OVRSpatialAnchor__EraseOptions(GlobalNamespace__OVRSpatialAnchor__EraseOptions&&) = default;
                    constexpr GlobalNamespace__OVRSpatialAnchor__EraseOptions& operator=(GlobalNamespace__OVRSpatialAnchor__EraseOptions const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__OVRSpatialAnchor__EraseOptions& operator=(GlobalNamespace__OVRSpatialAnchor__EraseOptions&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OVRSpatialAnchor__EraseOptions(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 GlobalNamespace::GlobalNamespace__OVRSpace__StorageLocation __declspec(property(get=__get_Storage, put=__set_Storage))  Storage;

constexpr void __set_Storage(GlobalNamespace::GlobalNamespace__OVRSpace__StorageLocation value) ;

constexpr GlobalNamespace::GlobalNamespace__OVRSpace__StorageLocation __get_Storage() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::OperationResult
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8851))
// CS Name: OVRSpatialAnchor::OperationResult
struct CORDL_TYPE GlobalNamespace__OVRSpatialAnchor__OperationResult : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__OVRSpatialAnchor__OperationResult(int32_t value__) noexcept;


                    constexpr GlobalNamespace__OVRSpatialAnchor__OperationResult(GlobalNamespace__OVRSpatialAnchor__OperationResult const&) = default;
                    constexpr GlobalNamespace__OVRSpatialAnchor__OperationResult(GlobalNamespace__OVRSpatialAnchor__OperationResult&&) = default;
                    constexpr GlobalNamespace__OVRSpatialAnchor__OperationResult& operator=(GlobalNamespace__OVRSpatialAnchor__OperationResult const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__OVRSpatialAnchor__OperationResult& operator=(GlobalNamespace__OVRSpatialAnchor__OperationResult&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OVRSpatialAnchor__OperationResult(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__OVRSpatialAnchor__OperationResult_Unwrapped : int32_t {
__Success = 0,
__Failure = -1000,
__Failure_SpaceCloudStorageDisabled = -2000,
__Failure_SpaceMappingInsufficient = -2001,
__Failure_SpaceLocalizationFailed = -2002,
__Failure_SpaceNetworkTimeout = -2003,
__Failure_SpaceNetworkRequestFailed = -2004,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__OVRSpatialAnchor__OperationResult_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__OVRSpatialAnchor__OperationResult_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Success offset 0
static GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__OperationResult const Success;

/// @brief Field Failure offset 0
static GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__OperationResult const Failure;

/// @brief Field Failure_SpaceCloudStorageDisabled offset 0
static GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__OperationResult const Failure_SpaceCloudStorageDisabled;

/// @brief Field Failure_SpaceMappingInsufficient offset 0
static GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__OperationResult const Failure_SpaceMappingInsufficient;

/// @brief Field Failure_SpaceLocalizationFailed offset 0
static GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__OperationResult const Failure_SpaceLocalizationFailed;

/// @brief Field Failure_SpaceNetworkTimeout offset 0
static GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__OperationResult const Failure_SpaceNetworkTimeout;

/// @brief Field Failure_SpaceNetworkRequestFailed offset 0
static GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__OperationResult const Failure_SpaceNetworkRequestFailed;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8852))
// CS Name: OVRSpatialAnchor::<>c
class CORDL_TYPE GlobalNamespace__OVRSpatialAnchor____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GlobalNamespace__OVRSpatialAnchor____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__OVRSpatialAnchor____c", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__OVRSpatialAnchor____c(GlobalNamespace__OVRSpatialAnchor____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__OVRSpatialAnchor____c", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__OVRSpatialAnchor____c(GlobalNamespace__OVRSpatialAnchor____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OVRSpatialAnchor____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__OVRSpatialAnchor____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__OVRSpatialAnchor____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__OVRSpatialAnchor____c& operator=(GlobalNamespace__OVRSpatialAnchor____c&& o) noexcept = default;
  constexpr GlobalNamespace__OVRSpatialAnchor____c& operator=(GlobalNamespace__OVRSpatialAnchor____c const& o) noexcept = default;
                


// Fields

static GlobalNamespace::GlobalNamespace__OVRSpatialAnchor____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(GlobalNamespace::GlobalNamespace__OVRSpatialAnchor____c value) ;

static GlobalNamespace::GlobalNamespace__OVRSpatialAnchor____c __get___9() ;

static System::Comparison_1<GlobalNamespace::OVRSpaceUser> __declspec(property(get=__get___9__34_0, put=__set___9__34_0))  __9__34_0;

static void __set___9__34_0(System::Comparison_1<GlobalNamespace::OVRSpaceUser> value) ;

static System::Comparison_1<GlobalNamespace::OVRSpaceUser> __get___9__34_0() ;


// Methods

static GlobalNamespace::GlobalNamespace__OVRSpatialAnchor____c New_ctor() ;

/// @brief Method .ctor addr 0x26128d0 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <GetListToStoreTheShareRequest>b__34_0 addr 0x26128d8 size 0x3c virtual false final false
 int32_t _GetListToStoreTheShareRequest_b__34_0(GlobalNamespace::OVRSpaceUser x, GlobalNamespace::OVRSpaceUser y) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::OVRSpatialAnchor
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8853))
// CS Name: OVRSpatialAnchor
class CORDL_TYPE OVRSpatialAnchor : public UnityEngine::MonoBehaviour {
public:
// Declarations
using __c = GlobalNamespace::GlobalNamespace__OVRSpatialAnchor____c;

using OperationResult = GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__OperationResult;

using EraseOptions = GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__EraseOptions;

using SaveOptions = GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__SaveOptions;

using Development = GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__Development;

using MultiAnchorActionType = GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__MultiAnchorActionType;

using UnboundAnchor = GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__UnboundAnchor;

using LoadOptions = GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__LoadOptions;

using MultiAnchorDelegatePair = GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__MultiAnchorDelegatePair;

using SingleAnchorDelegatePair = GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__SingleAnchorDelegatePair;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~OVRSpatialAnchor() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRSpatialAnchor", modifiers: " const&", def_value: None }]
constexpr OVRSpatialAnchor(OVRSpatialAnchor const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRSpatialAnchor", modifiers: "&&", def_value: None }]
constexpr OVRSpatialAnchor(OVRSpatialAnchor&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVRSpatialAnchor(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr OVRSpatialAnchor& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVRSpatialAnchor& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVRSpatialAnchor& operator=(OVRSpatialAnchor&& o) noexcept = default;
  constexpr OVRSpatialAnchor& operator=(OVRSpatialAnchor const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get__startCalled, put=__set__startCalled))  _startCalled;

constexpr void __set__startCalled(bool value) ;

constexpr bool __get__startCalled() const;

 uint64_t __declspec(property(get=__get__requestId, put=__set__requestId))  _requestId;

constexpr void __set__requestId(uint64_t value) ;

constexpr uint64_t __get__requestId() const;

 GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__SaveOptions __declspec(property(get=__get__defaultSaveOptions, put=__set__defaultSaveOptions))  _defaultSaveOptions;

constexpr void __set__defaultSaveOptions(GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__SaveOptions value) ;

constexpr GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__SaveOptions __get__defaultSaveOptions() const;

 GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__EraseOptions __declspec(property(get=__get__defaultEraseOptions, put=__set__defaultEraseOptions))  _defaultEraseOptions;

constexpr void __set__defaultEraseOptions(GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__EraseOptions value) ;

constexpr GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__EraseOptions __get__defaultEraseOptions() const;

 System::Action_1<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__OperationResult> __declspec(property(get=__get_OnLocalize, put=__set_OnLocalize))  OnLocalize;

constexpr void __set_OnLocalize(System::Action_1<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__OperationResult> value) ;

constexpr System::Action_1<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__OperationResult> __get_OnLocalize() const;

 GlobalNamespace::OVRSpace __declspec(property(get=__get__Space_k__BackingField, put=__set__Space_k__BackingField))  _Space_k__BackingField;

constexpr void __set__Space_k__BackingField(GlobalNamespace::OVRSpace value) ;

constexpr GlobalNamespace::OVRSpace __get__Space_k__BackingField() const;

 System::Guid __declspec(property(get=__get__Uuid_k__BackingField, put=__set__Uuid_k__BackingField))  _Uuid_k__BackingField;

constexpr void __set__Uuid_k__BackingField(System::Guid value) ;

constexpr System::Guid __get__Uuid_k__BackingField() const;

static System::Collections::Generic::Dictionary_2<System::Guid,GlobalNamespace::OVRSpatialAnchor> __declspec(property(get=__get_SpatialAnchors, put=__set_SpatialAnchors))  SpatialAnchors;

static void __set_SpatialAnchors(System::Collections::Generic::Dictionary_2<System::Guid,GlobalNamespace::OVRSpatialAnchor> value) ;

static System::Collections::Generic::Dictionary_2<System::Guid,GlobalNamespace::OVRSpatialAnchor> __get_SpatialAnchors() ;

static System::Collections::Generic::Dictionary_2<uint64_t,GlobalNamespace::OVRSpatialAnchor> __declspec(property(get=__get_CreationRequests, put=__set_CreationRequests))  CreationRequests;

static void __set_CreationRequests(System::Collections::Generic::Dictionary_2<uint64_t,GlobalNamespace::OVRSpatialAnchor> value) ;

static System::Collections::Generic::Dictionary_2<uint64_t,GlobalNamespace::OVRSpatialAnchor> __get_CreationRequests() ;

static System::Collections::Generic::Dictionary_2<GlobalNamespace::GlobalNamespace__OVRSpace__StorageLocation,System::Collections::Generic::List_1<GlobalNamespace::OVRSpatialAnchor>> __declspec(property(get=__get_SaveRequests, put=__set_SaveRequests))  SaveRequests;

static void __set_SaveRequests(System::Collections::Generic::Dictionary_2<GlobalNamespace::GlobalNamespace__OVRSpace__StorageLocation,System::Collections::Generic::List_1<GlobalNamespace::OVRSpatialAnchor>> value) ;

static System::Collections::Generic::Dictionary_2<GlobalNamespace::GlobalNamespace__OVRSpace__StorageLocation,System::Collections::Generic::List_1<GlobalNamespace::OVRSpatialAnchor>> __get_SaveRequests() ;

static System::Collections::Generic::Dictionary_2<GlobalNamespace::OVRSpatialAnchor,System::Action_2<GlobalNamespace::OVRSpatialAnchor,bool>> __declspec(property(get=__get_SaveRequestCallbacks, put=__set_SaveRequestCallbacks))  SaveRequestCallbacks;

static void __set_SaveRequestCallbacks(System::Collections::Generic::Dictionary_2<GlobalNamespace::OVRSpatialAnchor,System::Action_2<GlobalNamespace::OVRSpatialAnchor,bool>> value) ;

static System::Collections::Generic::Dictionary_2<GlobalNamespace::OVRSpatialAnchor,System::Action_2<GlobalNamespace::OVRSpatialAnchor,bool>> __get_SaveRequestCallbacks() ;

static System::Collections::Generic::List_1<System::ValueTuple_2<System::Collections::Generic::List_1<GlobalNamespace::OVRSpaceUser>,System::Collections::Generic::List_1<GlobalNamespace::OVRSpatialAnchor>>> __declspec(property(get=__get_ShareRequests, put=__set_ShareRequests))  ShareRequests;

static void __set_ShareRequests(System::Collections::Generic::List_1<System::ValueTuple_2<System::Collections::Generic::List_1<GlobalNamespace::OVRSpaceUser>,System::Collections::Generic::List_1<GlobalNamespace::OVRSpatialAnchor>>> value) ;

static System::Collections::Generic::List_1<System::ValueTuple_2<System::Collections::Generic::List_1<GlobalNamespace::OVRSpaceUser>,System::Collections::Generic::List_1<GlobalNamespace::OVRSpatialAnchor>>> __get_ShareRequests() ;

static System::Collections::Generic::Dictionary_2<GlobalNamespace::OVRSpatialAnchor,System::Action_1<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__OperationResult>> __declspec(property(get=__get_ShareRequestCallbacks, put=__set_ShareRequestCallbacks))  ShareRequestCallbacks;

static void __set_ShareRequestCallbacks(System::Collections::Generic::Dictionary_2<GlobalNamespace::OVRSpatialAnchor,System::Action_1<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__OperationResult>> value) ;

static System::Collections::Generic::Dictionary_2<GlobalNamespace::OVRSpatialAnchor,System::Action_1<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__OperationResult>> __get_ShareRequestCallbacks() ;

static System::Collections::Generic::Dictionary_2<uint64_t,GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__SingleAnchorDelegatePair> __declspec(property(get=__get_SingleAnchorCompletionDelegates, put=__set_SingleAnchorCompletionDelegates))  SingleAnchorCompletionDelegates;

static void __set_SingleAnchorCompletionDelegates(System::Collections::Generic::Dictionary_2<uint64_t,GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__SingleAnchorDelegatePair> value) ;

static System::Collections::Generic::Dictionary_2<uint64_t,GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__SingleAnchorDelegatePair> __get_SingleAnchorCompletionDelegates() ;

static System::Collections::Generic::Dictionary_2<uint64_t,GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__MultiAnchorDelegatePair> __declspec(property(get=__get_MultiAnchorCompletionDelegates, put=__set_MultiAnchorCompletionDelegates))  MultiAnchorCompletionDelegates;

static void __set_MultiAnchorCompletionDelegates(System::Collections::Generic::Dictionary_2<uint64_t,GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__MultiAnchorDelegatePair> value) ;

static System::Collections::Generic::Dictionary_2<uint64_t,GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__MultiAnchorDelegatePair> __get_MultiAnchorCompletionDelegates() ;

static System::Collections::Generic::Dictionary_2<uint64_t,System::Action_2<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__UnboundAnchor,bool>> __declspec(property(get=__get_LocalizationDelegates, put=__set_LocalizationDelegates))  LocalizationDelegates;

static void __set_LocalizationDelegates(System::Collections::Generic::Dictionary_2<uint64_t,System::Action_2<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__UnboundAnchor,bool>> value) ;

static System::Collections::Generic::Dictionary_2<uint64_t,System::Action_2<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__UnboundAnchor,bool>> __get_LocalizationDelegates() ;

static System::Collections::Generic::Dictionary_2<uint64_t,System::Action_1<::ArrayW<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__UnboundAnchor>>> __declspec(property(get=__get_Queries, put=__set_Queries))  Queries;

static void __set_Queries(System::Collections::Generic::Dictionary_2<uint64_t,System::Action_1<::ArrayW<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__UnboundAnchor>>> value) ;

static System::Collections::Generic::Dictionary_2<uint64_t,System::Action_1<::ArrayW<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__UnboundAnchor>>> __get_Queries() ;

static System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__UnboundAnchor> __declspec(property(get=__get_UnboundAnchorBuffer, put=__set_UnboundAnchorBuffer))  UnboundAnchorBuffer;

static void __set_UnboundAnchorBuffer(System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__UnboundAnchor> value) ;

static System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__UnboundAnchor> __get_UnboundAnchorBuffer() ;

static ::ArrayW<GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceComponentType> __declspec(property(get=__get_ComponentTypeBuffer, put=__set_ComponentTypeBuffer))  ComponentTypeBuffer;

static void __set_ComponentTypeBuffer(::ArrayW<GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceComponentType> value) ;

static ::ArrayW<GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceComponentType> __get_ComponentTypeBuffer() ;


// Properties

 GlobalNamespace::OVRSpace __declspec(property(get=get_Space, put=set_Space))  Space;

 System::Guid __declspec(property(get=get_Uuid, put=set_Uuid))  Uuid;

 bool __declspec(property(get=get_Created))  Created;

 bool __declspec(property(get=get_PendingCreation))  PendingCreation;

 bool __declspec(property(get=get_Localized))  Localized;


// Methods

/// @brief Method add_OnLocalize addr 0x260ce50 size 0xb0 virtual false final false
 void add_OnLocalize(System::Action_1<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__OperationResult> value) ;

/// @brief Method remove_OnLocalize addr 0x260cf00 size 0xb0 virtual false final false
 void remove_OnLocalize(System::Action_1<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__OperationResult> value) ;

/// @brief Method get_Space addr 0x260cfb0 size 0x8 virtual false final false
 GlobalNamespace::OVRSpace get_Space() ;

/// @brief Method set_Space addr 0x260cfb8 size 0x8 virtual false final false
 void set_Space(GlobalNamespace::OVRSpace value) ;

/// @brief Method get_Uuid addr 0x260cfc0 size 0xc virtual false final false
 System::Guid get_Uuid() ;

/// @brief Method set_Uuid addr 0x260cfcc size 0x8 virtual false final false
 void set_Uuid(System::Guid value) ;

/// @brief Method get_Created addr 0x260cfd4 size 0x10 virtual false final false
 bool get_Created() ;

/// @brief Method get_PendingCreation addr 0x260cfe4 size 0x10 virtual false final false
 bool get_PendingCreation() ;

/// @brief Method get_Localized addr 0x260cff4 size 0x90 virtual false final false
 bool get_Localized() ;

/// @brief Method InitializeFromExisting addr 0x260d084 size 0x20c virtual false final false
 void InitializeFromExisting(GlobalNamespace::OVRSpace space, System::Guid uuid) ;

/// @brief Method Save addr 0x260d4f8 size 0x10 virtual false final false
 void Save(System::Action_2<GlobalNamespace::OVRSpatialAnchor,bool> onComplete) ;

/// @brief Method ToNativeArray addr 0x260d638 size 0x568 virtual false final false
static Unity::Collections::NativeArray_1<uint64_t> ToNativeArray(System::Collections::Generic::ICollection_1<GlobalNamespace::OVRSpatialAnchor> anchors) ;

/// @brief Method Save addr 0x260d508 size 0x130 virtual false final false
 void Save(GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__SaveOptions saveOptions, System::Action_2<GlobalNamespace::OVRSpatialAnchor,bool> onComplete) ;

/// @brief Method Save addr 0x260dba0 size 0x250 virtual false final false
static void Save(System::Collections::Generic::ICollection_1<GlobalNamespace::OVRSpatialAnchor> anchors, GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__SaveOptions saveOptions, System::Action_2<System::Collections::Generic::ICollection_1<GlobalNamespace::OVRSpatialAnchor>,GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__OperationResult> onComplete) ;

/// @brief Method CopyAnchorListIntoListFromPool addr 0x260ddf0 size 0xac virtual false final false
static System::Collections::Generic::List_1<GlobalNamespace::OVRSpatialAnchor> CopyAnchorListIntoListFromPool(System::Collections::Generic::IEnumerable_1<GlobalNamespace::OVRSpatialAnchor> anchorList) ;

/// @brief Method Share addr 0x260de9c size 0xdc virtual false final false
 void Share(GlobalNamespace::OVRSpaceUser user, System::Action_1<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__OperationResult> onComplete) ;

/// @brief Method Share addr 0x260e080 size 0x140 virtual false final false
 void Share(GlobalNamespace::OVRSpaceUser user1, GlobalNamespace::OVRSpaceUser user2, System::Action_1<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__OperationResult> onComplete) ;

/// @brief Method Share addr 0x260e1c0 size 0x19c virtual false final false
 void Share(GlobalNamespace::OVRSpaceUser user1, GlobalNamespace::OVRSpaceUser user2, GlobalNamespace::OVRSpaceUser user3, System::Action_1<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__OperationResult> onComplete) ;

/// @brief Method Share addr 0x260e35c size 0x200 virtual false final false
 void Share(GlobalNamespace::OVRSpaceUser user1, GlobalNamespace::OVRSpaceUser user2, GlobalNamespace::OVRSpaceUser user3, GlobalNamespace::OVRSpaceUser user4, System::Action_1<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__OperationResult> onComplete) ;

/// @brief Method Share addr 0x260e55c size 0x398 virtual false final false
 void Share(System::Collections::Generic::ICollection_1<GlobalNamespace::OVRSpaceUser> users, System::Action_1<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__OperationResult> onComplete) ;

/// @brief Method Share addr 0x260e8f4 size 0x634 virtual false final false
static void Share(System::Collections::Generic::ICollection_1<GlobalNamespace::OVRSpatialAnchor> anchors, System::Collections::Generic::ICollection_1<GlobalNamespace::OVRSpaceUser> users, System::Action_2<System::Collections::Generic::ICollection_1<GlobalNamespace::OVRSpatialAnchor>,GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__OperationResult> onComplete) ;

/// @brief Method ShareInternal addr 0x260df78 size 0x108 virtual false final false
 void ShareInternal(System::Collections::Generic::List_1<GlobalNamespace::OVRSpaceUser> users, System::Action_1<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__OperationResult> onComplete) ;

/// @brief Method GetListToStoreTheShareRequest addr 0x260ef28 size 0x37c virtual false final false
 System::Collections::Generic::List_1<GlobalNamespace::OVRSpatialAnchor> GetListToStoreTheShareRequest(System::Collections::Generic::List_1<GlobalNamespace::OVRSpaceUser> users) ;

/// @brief Method AreSortedUserListsEqual addr 0x260f2a4 size 0x284 virtual false final false
static bool AreSortedUserListsEqual(System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::OVRSpaceUser> sortedList1, System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::OVRSpaceUser> sortedList2) ;

/// @brief Method Erase addr 0x260f5a4 size 0x10 virtual false final false
 void Erase(System::Action_2<GlobalNamespace::OVRSpatialAnchor,bool> onComplete) ;

/// @brief Method Erase addr 0x260f5b4 size 0x120 virtual false final false
 void Erase(GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__EraseOptions eraseOptions, System::Action_2<GlobalNamespace::OVRSpatialAnchor,bool> onComplete) ;

/// @brief Method ThrowIfBound addr 0x260d290 size 0x130 virtual false final false
static void ThrowIfBound(System::Guid uuid) ;

/// @brief Method InitializeUnchecked addr 0x260d3c0 size 0x138 virtual false final false
 void InitializeUnchecked(GlobalNamespace::OVRSpace space, System::Guid uuid) ;

/// @brief Method Start addr 0x260f778 size 0x18 virtual false final false
 void Start() ;

/// @brief Method Update addr 0x260f8fc size 0x10 virtual false final false
 void Update() ;

/// @brief Method LateUpdate addr 0x260f90c size 0x50 virtual false final false
 void LateUpdate() ;

/// @brief Method SaveBatchAnchors addr 0x260f95c size 0x1ec virtual false final false
static void SaveBatchAnchors() ;

/// @brief Method ShareBatchAnchors addr 0x260fb48 size 0x26c virtual false final false
static void ShareBatchAnchors() ;

/// @brief Method OnDestroy addr 0x260fdb4 size 0xb8 virtual false final false
 void OnDestroy() ;

/// @brief Method GetTrackingSpacePose addr 0x260fe6c size 0xc8 virtual false final false
 GlobalNamespace::OVRPose GetTrackingSpacePose() ;

/// @brief Method CreateSpatialAnchor addr 0x260f790 size 0x16c virtual false final false
 void CreateSpatialAnchor() ;

/// @brief Method TryGetPose addr 0x260ff34 size 0x190 virtual false final false
static bool TryGetPose(GlobalNamespace::OVRSpace space, ByRef<GlobalNamespace::OVRPose> pose) ;

/// @brief Method UpdateTransform addr 0x260f6d4 size 0xa4 virtual false final false
 void UpdateTransform() ;

/// @brief Method TryExtractValue addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TKey,typename TValue>
static bool TryExtractValue(System::Collections::Generic::Dictionary_2<TKey,TValue> dict, TKey key, ByRef<TValue> value) ;

/// @brief Method InitializeOnLoad addr 0x26100c4 size 0x174 virtual false final false
static void InitializeOnLoad() ;

/// @brief Method InvokeSingleAnchorDelegate addr 0x26108e4 size 0xc0 virtual false final false
static void InvokeSingleAnchorDelegate(uint64_t requestId, bool result) ;

/// @brief Method InvokeMultiAnchorDelegate addr 0x26109a4 size 0x47c virtual false final false
static void InvokeMultiAnchorDelegate(uint64_t requestId, GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__OperationResult result, GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__MultiAnchorActionType actionType) ;

/// @brief Method OnSpatialAnchorCreateComplete addr 0x2610e20 size 0x19c virtual false final false
static void OnSpatialAnchorCreateComplete(uint64_t requestId, bool success, GlobalNamespace::OVRSpace space, System::Guid uuid) ;

/// @brief Method OnSpaceSaveComplete addr 0x2610fbc size 0x64 virtual false final false
static void OnSpaceSaveComplete(uint64_t requestId, GlobalNamespace::OVRSpace space, bool result, System::Guid uuid) ;

/// @brief Method OnSpaceEraseComplete addr 0x2611020 size 0x64 virtual false final false
static void OnSpaceEraseComplete(uint64_t requestId, bool result, System::Guid uuid, GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceStorageLocation location) ;

/// @brief Method LoadUnboundAnchors addr 0x2611084 size 0x158 virtual false final false
static bool LoadUnboundAnchors(GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__LoadOptions options, System::Action_1<::ArrayW<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__UnboundAnchor>> onComplete) ;

/// @brief Method OnSpaceQueryComplete addr 0x26112ec size 0x778 virtual false final false
static void OnSpaceQueryComplete(uint64_t requestId, bool queryResult) ;

/// @brief Method OnSpaceSetComponentStatusComplete addr 0x2611a70 size 0x16c virtual false final false
static void OnSpaceSetComponentStatusComplete(uint64_t requestId, bool result, GlobalNamespace::OVRSpace space, System::Guid uuid, GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceComponentType componentType, bool enabled) ;

/// @brief Method OnSpaceListSaveComplete addr 0x2611bdc size 0x68 virtual false final false
static void OnSpaceListSaveComplete(uint64_t requestId, GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__OperationResult result) ;

/// @brief Method OnShareSpacesComplete addr 0x2611c44 size 0x68 virtual false final false
static void OnShareSpacesComplete(uint64_t requestId, GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__OperationResult result) ;

static GlobalNamespace::OVRSpatialAnchor New_ctor() ;

/// @brief Method .ctor addr 0x2611cac size 0xc virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__MultiAnchorActionType, "", "OVRSpatialAnchor/MultiAnchorActionType");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__OperationResult, "", "OVRSpatialAnchor/OperationResult");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__Development);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__Development, "", "OVRSpatialAnchor/Development");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__OVRSpatialAnchor____c);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OVRSpatialAnchor____c, "", "OVRSpatialAnchor/<>c");
NEED_NO_BOX(GlobalNamespace::OVRSpatialAnchor);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRSpatialAnchor, "", "OVRSpatialAnchor");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__EraseOptions, "", "OVRSpatialAnchor/EraseOptions");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__LoadOptions, "", "OVRSpatialAnchor/LoadOptions");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__MultiAnchorDelegatePair, "", "OVRSpatialAnchor/MultiAnchorDelegatePair");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__SaveOptions, "", "OVRSpatialAnchor/SaveOptions");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__SingleAnchorDelegatePair, "", "OVRSpatialAnchor/SingleAnchorDelegatePair");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__UnboundAnchor, "", "OVRSpatialAnchor/UnboundAnchor");
