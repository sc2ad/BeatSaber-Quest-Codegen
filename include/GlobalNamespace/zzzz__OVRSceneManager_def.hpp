#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace GlobalNamespace {
class OVRScenePlane;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace GlobalNamespace {
class GlobalNamespace__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace GlobalNamespace {
class GlobalNamespace__OVRSceneManager__RoomLayoutInformation;
}
namespace GlobalNamespace {
class OVRCameraRig;
}
namespace System {
struct Guid;
}
namespace GlobalNamespace {
class GlobalNamespace__OVRSceneManager__Development;
}
namespace GlobalNamespace {
class GlobalNamespace__OVRSceneManager__Classification;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace GlobalNamespace {
class GlobalNamespace__OVRSceneManager____c__DisplayClass47_0;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRSceneManager__QueryMode;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRSceneManager__LogForwarder;
}
namespace System {
class Action;
}
namespace GlobalNamespace {
struct OVRSpace;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace GlobalNamespace {
class OVRSceneAnchor;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRPlugin__SpaceQueryResult;
}
namespace System {
template<typename T>
class Comparison_1;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRPlugin__SpaceComponentType;
}
namespace UnityEngine {
class Transform;
}
namespace GlobalNamespace {
class OVRScenePrefabOverride;
}
namespace System {
template<typename T>
struct Nullable_1;
}
// Forward declare root types
namespace GlobalNamespace {
struct GlobalNamespace__OVRSceneManager__QueryMode;
}
namespace GlobalNamespace {
class GlobalNamespace__OVRSceneManager__Classification;
}
namespace GlobalNamespace {
class GlobalNamespace__OVRSceneManager__Development;
}
namespace GlobalNamespace {
class GlobalNamespace__OVRSceneManager__RoomLayoutInformation;
}
namespace GlobalNamespace {
class GlobalNamespace__OVRSceneManager____c__DisplayClass47_0;
}
namespace GlobalNamespace {
class GlobalNamespace__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d;
}
namespace GlobalNamespace {
class OVRSceneManager;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRSceneManager__LogForwarder;
}
// Type: ::Classification
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8819))
// CS Name: OVRSceneManager::Classification
class CORDL_TYPE GlobalNamespace__OVRSceneManager__Classification : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GlobalNamespace__OVRSceneManager__Classification() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__OVRSceneManager__Classification", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__OVRSceneManager__Classification(GlobalNamespace__OVRSceneManager__Classification const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__OVRSceneManager__Classification", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__OVRSceneManager__Classification(GlobalNamespace__OVRSceneManager__Classification&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OVRSceneManager__Classification(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__OVRSceneManager__Classification& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__OVRSceneManager__Classification& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__OVRSceneManager__Classification& operator=(GlobalNamespace__OVRSceneManager__Classification&& o) noexcept = default;
  constexpr GlobalNamespace__OVRSceneManager__Classification& operator=(GlobalNamespace__OVRSceneManager__Classification const& o) noexcept = default;
                


// Fields

/// @brief Field Floor offset 0
static constexpr ::ConstString  Floor{u"FLOOR"};

/// @brief Field Ceiling offset 0
static constexpr ::ConstString  Ceiling{u"CEILING"};

/// @brief Field WallFace offset 0
static constexpr ::ConstString  WallFace{u"WALL_FACE"};

/// @brief Field Desk offset 0
static constexpr ::ConstString  Desk{u"DESK"};

/// @brief Field Couch offset 0
static constexpr ::ConstString  Couch{u"COUCH"};

/// @brief Field DoorFrame offset 0
static constexpr ::ConstString  DoorFrame{u"DOOR_FRAME"};

/// @brief Field WindowFrame offset 0
static constexpr ::ConstString  WindowFrame{u"WINDOW_FRAME"};

/// @brief Field Other offset 0
static constexpr ::ConstString  Other{u"OTHER"};

/// @brief Field Storage offset 0
static constexpr ::ConstString  Storage{u"STORAGE"};

/// @brief Field Bed offset 0
static constexpr ::ConstString  Bed{u"BED"};

/// @brief Field Screen offset 0
static constexpr ::ConstString  Screen{u"SCREEN"};

/// @brief Field Lamp offset 0
static constexpr ::ConstString  Lamp{u"LAMP"};

/// @brief Field Plant offset 0
static constexpr ::ConstString  Plant{u"PLANT"};

static System::Collections::Generic::IReadOnlyList_1<::StringW> __declspec(property(get=__get__List_k__BackingField, put=__set__List_k__BackingField))  _List_k__BackingField;

static void __set__List_k__BackingField(System::Collections::Generic::IReadOnlyList_1<::StringW> value) ;

static System::Collections::Generic::IReadOnlyList_1<::StringW> __get__List_k__BackingField() ;


// Properties

static System::Collections::Generic::IReadOnlyList_1<::StringW> __declspec(property(get=get_List))  List;


// Methods

/// @brief Method get_List addr 0x2608b5c size 0x58 virtual false final false
static System::Collections::Generic::IReadOnlyList_1<::StringW> get_List() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::RoomLayoutInformation
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8820))
// CS Name: OVRSceneManager::RoomLayoutInformation
class CORDL_TYPE GlobalNamespace__OVRSceneManager__RoomLayoutInformation : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~GlobalNamespace__OVRSceneManager__RoomLayoutInformation() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__OVRSceneManager__RoomLayoutInformation", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__OVRSceneManager__RoomLayoutInformation(GlobalNamespace__OVRSceneManager__RoomLayoutInformation const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__OVRSceneManager__RoomLayoutInformation", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__OVRSceneManager__RoomLayoutInformation(GlobalNamespace__OVRSceneManager__RoomLayoutInformation&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OVRSceneManager__RoomLayoutInformation(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__OVRSceneManager__RoomLayoutInformation& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__OVRSceneManager__RoomLayoutInformation& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__OVRSceneManager__RoomLayoutInformation& operator=(GlobalNamespace__OVRSceneManager__RoomLayoutInformation&& o) noexcept = default;
  constexpr GlobalNamespace__OVRSceneManager__RoomLayoutInformation& operator=(GlobalNamespace__OVRSceneManager__RoomLayoutInformation const& o) noexcept = default;
                


// Fields

 GlobalNamespace::OVRScenePlane __declspec(property(get=__get_Floor, put=__set_Floor))  Floor;

constexpr void __set_Floor(GlobalNamespace::OVRScenePlane value) ;

constexpr GlobalNamespace::OVRScenePlane __get_Floor() const;

 GlobalNamespace::OVRScenePlane __declspec(property(get=__get_Ceiling, put=__set_Ceiling))  Ceiling;

constexpr void __set_Ceiling(GlobalNamespace::OVRScenePlane value) ;

constexpr GlobalNamespace::OVRScenePlane __get_Ceiling() const;

 System::Collections::Generic::List_1<GlobalNamespace::OVRScenePlane> __declspec(property(get=__get_Walls, put=__set_Walls))  Walls;

constexpr void __set_Walls(System::Collections::Generic::List_1<GlobalNamespace::OVRScenePlane> value) ;

constexpr System::Collections::Generic::List_1<GlobalNamespace::OVRScenePlane> __get_Walls() const;


// Methods

static GlobalNamespace::GlobalNamespace__OVRSceneManager__RoomLayoutInformation New_ctor() ;

/// @brief Method .ctor addr 0x260618c size 0x7c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::QueryMode
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8821))
// CS Name: OVRSceneManager::QueryMode
struct CORDL_TYPE GlobalNamespace__OVRSceneManager__QueryMode : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__OVRSceneManager__QueryMode(int32_t value__) noexcept;


                    constexpr GlobalNamespace__OVRSceneManager__QueryMode(GlobalNamespace__OVRSceneManager__QueryMode const&) = default;
                    constexpr GlobalNamespace__OVRSceneManager__QueryMode(GlobalNamespace__OVRSceneManager__QueryMode&&) = default;
                    constexpr GlobalNamespace__OVRSceneManager__QueryMode& operator=(GlobalNamespace__OVRSceneManager__QueryMode const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__OVRSceneManager__QueryMode& operator=(GlobalNamespace__OVRSceneManager__QueryMode&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OVRSceneManager__QueryMode(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__OVRSceneManager__QueryMode_Unwrapped : int32_t {
__QueryAllAnchors = 0,
__QueryByUuid = 1,
__QueryAllBounded2DEnabled = 2,
__QueryAllRoomLayoutEnabledForAllEntitiesInside = 3,
__QueryAllRoomLayoutEnabledForRoomBox = 4,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__OVRSceneManager__QueryMode_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__OVRSceneManager__QueryMode_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field QueryAllAnchors offset 0
static GlobalNamespace::GlobalNamespace__OVRSceneManager__QueryMode const QueryAllAnchors;

/// @brief Field QueryByUuid offset 0
static GlobalNamespace::GlobalNamespace__OVRSceneManager__QueryMode const QueryByUuid;

/// @brief Field QueryAllBounded2DEnabled offset 0
static GlobalNamespace::GlobalNamespace__OVRSceneManager__QueryMode const QueryAllBounded2DEnabled;

/// @brief Field QueryAllRoomLayoutEnabledForAllEntitiesInside offset 0
static GlobalNamespace::GlobalNamespace__OVRSceneManager__QueryMode const QueryAllRoomLayoutEnabledForAllEntitiesInside;

/// @brief Field QueryAllRoomLayoutEnabledForRoomBox offset 0
static GlobalNamespace::GlobalNamespace__OVRSceneManager__QueryMode const QueryAllRoomLayoutEnabledForRoomBox;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::LogForwarder
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8822))
// CS Name: OVRSceneManager::LogForwarder
struct CORDL_TYPE GlobalNamespace__OVRSceneManager__LogForwarder : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations

                    constexpr GlobalNamespace__OVRSceneManager__LogForwarder(GlobalNamespace__OVRSceneManager__LogForwarder const&) = default;
                    constexpr GlobalNamespace__OVRSceneManager__LogForwarder(GlobalNamespace__OVRSceneManager__LogForwarder&&) = default;
                    constexpr GlobalNamespace__OVRSceneManager__LogForwarder& operator=(GlobalNamespace__OVRSceneManager__LogForwarder const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__OVRSceneManager__LogForwarder& operator=(GlobalNamespace__OVRSceneManager__LogForwarder&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OVRSceneManager__LogForwarder(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Methods

/// @brief Method Log addr 0x2606e78 size 0xb4 virtual false final false
 void Log(::StringW context, ::StringW message) ;

/// @brief Method LogWarning addr 0x2606f2c size 0xb4 virtual false final false
 void LogWarning(::StringW context, ::StringW message) ;

/// @brief Method LogError addr 0x2605094 size 0xb4 virtual false final false
 void LogError(::StringW context, ::StringW message) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::Development
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8823))
// CS Name: OVRSceneManager::Development
class CORDL_TYPE GlobalNamespace__OVRSceneManager__Development : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GlobalNamespace__OVRSceneManager__Development() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__OVRSceneManager__Development", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__OVRSceneManager__Development(GlobalNamespace__OVRSceneManager__Development const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__OVRSceneManager__Development", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__OVRSceneManager__Development(GlobalNamespace__OVRSceneManager__Development&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OVRSceneManager__Development(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__OVRSceneManager__Development& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__OVRSceneManager__Development& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__OVRSceneManager__Development& operator=(GlobalNamespace__OVRSceneManager__Development&& o) noexcept = default;
  constexpr GlobalNamespace__OVRSceneManager__Development& operator=(GlobalNamespace__OVRSceneManager__Development const& o) noexcept = default;
                


// Methods

/// @brief Method Log addr 0x2608f74 size 0xb4 virtual false final false
static void Log(::StringW context, ::StringW message) ;

/// @brief Method LogWarning addr 0x2609028 size 0xb4 virtual false final false
static void LogWarning(::StringW context, ::StringW message) ;

/// @brief Method LogError addr 0x26090dc size 0xb4 virtual false final false
static void LogError(::StringW context, ::StringW message) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<<ProcessQueryResult>g__EnabledComponents|0>d
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8824))
// CS Name: OVRSceneManager::<>c__DisplayClass47_0::<<ProcessQueryResult>g__EnabledComponents|0>d
class CORDL_TYPE GlobalNamespace__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<::StringW>
constexpr operator  System::Collections::Generic::IEnumerable_1<::StringW>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const noexcept;

/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<::StringW>
constexpr operator  System::Collections::Generic::IEnumerator_1<::StringW>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~GlobalNamespace__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d(GlobalNamespace__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d(GlobalNamespace__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d& operator=(GlobalNamespace__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d&& o) noexcept = default;
  constexpr GlobalNamespace__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d& operator=(GlobalNamespace__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::StringW __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(::StringW value) ;

constexpr ::StringW __get___2__current() const;

 int32_t __declspec(property(get=__get___l__initialThreadId, put=__set___l__initialThreadId))  __l__initialThreadId;

constexpr void __set___l__initialThreadId(int32_t value) ;

constexpr int32_t __get___l__initialThreadId() const;

 GlobalNamespace::GlobalNamespace__OVRSceneManager____c__DisplayClass47_0 __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::GlobalNamespace__OVRSceneManager____c__DisplayClass47_0 value) ;

constexpr GlobalNamespace::GlobalNamespace__OVRSceneManager____c__DisplayClass47_0 __get___4__this() const;


// Properties

 ::StringW __declspec(property(get=System_Collections_Generic_IEnumerator_System_String__get_Current))  System_Collections_Generic_IEnumerator_System_String__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

static GlobalNamespace::GlobalNamespace__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d New_ctor(int32_t __1__state) ;

/// @brief Method .ctor addr 0x2609190 size 0x34 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x26091c4 size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x26091c8 size 0x21c virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.String>.get_Current addr 0x26093e4 size 0x8 virtual true final true
 ::StringW System_Collections_Generic_IEnumerator_System_String__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x26093ec size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x260942c size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.Collections.Generic.IEnumerable<System.String>.GetEnumerator addr 0x2609434 size 0xa4 virtual true final true
 System::Collections::Generic::IEnumerator_1<::StringW> System_Collections_Generic_IEnumerable_System_String__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x26094d8 size 0x4 virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c__DisplayClass47_0
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8825))
// CS Name: OVRSceneManager::<>c__DisplayClass47_0
class CORDL_TYPE GlobalNamespace__OVRSceneManager____c__DisplayClass47_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __ProcessQueryResult_g__EnabledComponents_0_d = GlobalNamespace::GlobalNamespace__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~GlobalNamespace__OVRSceneManager____c__DisplayClass47_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__OVRSceneManager____c__DisplayClass47_0", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__OVRSceneManager____c__DisplayClass47_0(GlobalNamespace__OVRSceneManager____c__DisplayClass47_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__OVRSceneManager____c__DisplayClass47_0", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__OVRSceneManager____c__DisplayClass47_0(GlobalNamespace__OVRSceneManager____c__DisplayClass47_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OVRSceneManager____c__DisplayClass47_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__OVRSceneManager____c__DisplayClass47_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__OVRSceneManager____c__DisplayClass47_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__OVRSceneManager____c__DisplayClass47_0& operator=(GlobalNamespace__OVRSceneManager____c__DisplayClass47_0&& o) noexcept = default;
  constexpr GlobalNamespace__OVRSceneManager____c__DisplayClass47_0& operator=(GlobalNamespace__OVRSceneManager____c__DisplayClass47_0 const& o) noexcept = default;
                


// Fields

 uint64_t __declspec(property(get=__get_space, put=__set_space))  space;

constexpr void __set_space(uint64_t value) ;

constexpr uint64_t __get_space() const;

 bool __declspec(property(get=__get_bounded2dEnabled, put=__set_bounded2dEnabled))  bounded2dEnabled;

constexpr void __set_bounded2dEnabled(bool value) ;

constexpr bool __get_bounded2dEnabled() const;

 bool __declspec(property(get=__get_bounded3dEnabled, put=__set_bounded3dEnabled))  bounded3dEnabled;

constexpr void __set_bounded3dEnabled(bool value) ;

constexpr bool __get_bounded3dEnabled() const;

 bool __declspec(property(get=__get_roomLayoutEnabled, put=__set_roomLayoutEnabled))  roomLayoutEnabled;

constexpr void __set_roomLayoutEnabled(bool value) ;

constexpr bool __get_roomLayoutEnabled() const;


// Methods

static GlobalNamespace::GlobalNamespace__OVRSceneManager____c__DisplayClass47_0 New_ctor() ;

/// @brief Method .ctor addr 0x2608848 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <ProcessQueryResult>g__EnabledComponents|0 addr 0x2608850 size 0x78 virtual false final false
 System::Collections::Generic::IEnumerable_1<::StringW> _ProcessQueryResult_g__EnabledComponents_0() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::OVRSceneManager
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8826))
// CS Name: OVRSceneManager
class CORDL_TYPE OVRSceneManager : public UnityEngine::MonoBehaviour {
public:
// Declarations
using __c__DisplayClass47_0 = GlobalNamespace::GlobalNamespace__OVRSceneManager____c__DisplayClass47_0;

using Development = GlobalNamespace::GlobalNamespace__OVRSceneManager__Development;

using LogForwarder = GlobalNamespace::GlobalNamespace__OVRSceneManager__LogForwarder;

using QueryMode = GlobalNamespace::GlobalNamespace__OVRSceneManager__QueryMode;

using RoomLayoutInformation = GlobalNamespace::GlobalNamespace__OVRSceneManager__RoomLayoutInformation;

using Classification = GlobalNamespace::GlobalNamespace__OVRSceneManager__Classification;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xb8};

virtual ~OVRSceneManager() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRSceneManager", modifiers: " const&", def_value: None }]
constexpr OVRSceneManager(OVRSceneManager const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRSceneManager", modifiers: "&&", def_value: None }]
constexpr OVRSceneManager(OVRSceneManager&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVRSceneManager(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr OVRSceneManager& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVRSceneManager& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVRSceneManager& operator=(OVRSceneManager&& o) noexcept = default;
  constexpr OVRSceneManager& operator=(OVRSceneManager const& o) noexcept = default;
                


// Fields

 GlobalNamespace::OVRSceneAnchor __declspec(property(get=__get_PlanePrefab, put=__set_PlanePrefab))  PlanePrefab;

constexpr void __set_PlanePrefab(GlobalNamespace::OVRSceneAnchor value) ;

constexpr GlobalNamespace::OVRSceneAnchor __get_PlanePrefab() const;

 GlobalNamespace::OVRSceneAnchor __declspec(property(get=__get_VolumePrefab, put=__set_VolumePrefab))  VolumePrefab;

constexpr void __set_VolumePrefab(GlobalNamespace::OVRSceneAnchor value) ;

constexpr GlobalNamespace::OVRSceneAnchor __get_VolumePrefab() const;

 System::Collections::Generic::List_1<GlobalNamespace::OVRScenePrefabOverride> __declspec(property(get=__get_PrefabOverrides, put=__set_PrefabOverrides))  PrefabOverrides;

constexpr void __set_PrefabOverrides(System::Collections::Generic::List_1<GlobalNamespace::OVRScenePrefabOverride> value) ;

constexpr System::Collections::Generic::List_1<GlobalNamespace::OVRScenePrefabOverride> __get_PrefabOverrides() const;

 bool __declspec(property(get=__get_VerboseLogging, put=__set_VerboseLogging))  VerboseLogging;

constexpr void __set_VerboseLogging(bool value) ;

constexpr bool __get_VerboseLogging() const;

 int32_t __declspec(property(get=__get_MaxSceneAnchorUpdatesPerFrame, put=__set_MaxSceneAnchorUpdatesPerFrame))  MaxSceneAnchorUpdatesPerFrame;

constexpr void __set_MaxSceneAnchorUpdatesPerFrame(int32_t value) ;

constexpr int32_t __get_MaxSceneAnchorUpdatesPerFrame() const;

 System::Action __declspec(property(get=__get_SceneModelLoadedSuccessfully, put=__set_SceneModelLoadedSuccessfully))  SceneModelLoadedSuccessfully;

constexpr void __set_SceneModelLoadedSuccessfully(System::Action value) ;

constexpr System::Action __get_SceneModelLoadedSuccessfully() const;

 System::Action __declspec(property(get=__get_NoSceneModelToLoad, put=__set_NoSceneModelToLoad))  NoSceneModelToLoad;

constexpr void __set_NoSceneModelToLoad(System::Action value) ;

constexpr System::Action __get_NoSceneModelToLoad() const;

 System::Action __declspec(property(get=__get_SceneCaptureReturnedWithoutError, put=__set_SceneCaptureReturnedWithoutError))  SceneCaptureReturnedWithoutError;

constexpr void __set_SceneCaptureReturnedWithoutError(System::Action value) ;

constexpr System::Action __get_SceneCaptureReturnedWithoutError() const;

 System::Action __declspec(property(get=__get_UnexpectedErrorWithSceneCapture, put=__set_UnexpectedErrorWithSceneCapture))  UnexpectedErrorWithSceneCapture;

constexpr void __set_UnexpectedErrorWithSceneCapture(System::Action value) ;

constexpr System::Action __get_UnexpectedErrorWithSceneCapture() const;

 GlobalNamespace::GlobalNamespace__OVRSceneManager__RoomLayoutInformation __declspec(property(get=__get_RoomLayout, put=__set_RoomLayout))  RoomLayout;

constexpr void __set_RoomLayout(GlobalNamespace::GlobalNamespace__OVRSceneManager__RoomLayoutInformation value) ;

constexpr GlobalNamespace::GlobalNamespace__OVRSceneManager__RoomLayoutInformation __get_RoomLayout() const;

 System::Collections::Generic::Dictionary_2<System::Guid,int32_t> __declspec(property(get=__get__orderedRoomGuids, put=__set__orderedRoomGuids))  _orderedRoomGuids;

constexpr void __set__orderedRoomGuids(System::Collections::Generic::Dictionary_2<System::Guid,int32_t> value) ;

constexpr System::Collections::Generic::Dictionary_2<System::Guid,int32_t> __get__orderedRoomGuids() const;

 System::Comparison_1<GlobalNamespace::OVRScenePlane> __declspec(property(get=__get__wallOrderComparer, put=__set__wallOrderComparer))  _wallOrderComparer;

constexpr void __set__wallOrderComparer(System::Comparison_1<GlobalNamespace::OVRScenePlane> value) ;

constexpr System::Comparison_1<GlobalNamespace::OVRScenePlane> __get__wallOrderComparer() const;

 System::Collections::Generic::List_1<System::Guid> __declspec(property(get=__get__uuidsToQuery, put=__set__uuidsToQuery))  _uuidsToQuery;

constexpr void __set__uuidsToQuery(System::Collections::Generic::List_1<System::Guid> value) ;

constexpr System::Collections::Generic::List_1<System::Guid> __get__uuidsToQuery() const;

 GlobalNamespace::GlobalNamespace__OVRSceneManager__QueryMode __declspec(property(get=__get__currentQueryMode, put=__set__currentQueryMode))  _currentQueryMode;

constexpr void __set__currentQueryMode(GlobalNamespace::GlobalNamespace__OVRSceneManager__QueryMode value) ;

constexpr GlobalNamespace::GlobalNamespace__OVRSceneManager__QueryMode __get__currentQueryMode() const;

 uint64_t __declspec(property(get=__get__sceneCaptureRequestId, put=__set__sceneCaptureRequestId))  _sceneCaptureRequestId;

constexpr void __set__sceneCaptureRequestId(uint64_t value) ;

constexpr uint64_t __get__sceneCaptureRequestId() const;

 System::Collections::Generic::HashSet_1<uint64_t> __declspec(property(get=__get__individualRequestIds, put=__set__individualRequestIds))  _individualRequestIds;

constexpr void __set__individualRequestIds(System::Collections::Generic::HashSet_1<uint64_t> value) ;

constexpr System::Collections::Generic::HashSet_1<uint64_t> __get__individualRequestIds() const;

 System::Collections::Generic::Dictionary_2<GlobalNamespace::OVRSpace,GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceQueryResult> __declspec(property(get=__get__pendingLocatable, put=__set__pendingLocatable))  _pendingLocatable;

constexpr void __set__pendingLocatable(System::Collections::Generic::Dictionary_2<GlobalNamespace::OVRSpace,GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceQueryResult> value) ;

constexpr System::Collections::Generic::Dictionary_2<GlobalNamespace::OVRSpace,GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceQueryResult> __get__pendingLocatable() const;

 GlobalNamespace::OVRCameraRig __declspec(property(get=__get__cameraRig, put=__set__cameraRig))  _cameraRig;

constexpr void __set__cameraRig(GlobalNamespace::OVRCameraRig value) ;

constexpr GlobalNamespace::OVRCameraRig __get__cameraRig() const;

 int32_t __declspec(property(get=__get__sceneAnchorUpdateIndex, put=__set__sceneAnchorUpdateIndex))  _sceneAnchorUpdateIndex;

constexpr void __set__sceneAnchorUpdateIndex(int32_t value) ;

constexpr int32_t __get__sceneAnchorUpdateIndex() const;

 System::Collections::Generic::HashSet_1<System::Guid> __declspec(property(get=__get__uuidSet, put=__set__uuidSet))  _uuidSet;

constexpr void __set__uuidSet(System::Collections::Generic::HashSet_1<System::Guid> value) ;

constexpr System::Collections::Generic::HashSet_1<System::Guid> __get__uuidSet() const;

 bool __declspec(property(get=__get__sceneLoadComplete, put=__set__sceneLoadComplete))  _sceneLoadComplete;

constexpr void __set__sceneLoadComplete(bool value) ;

constexpr bool __get__sceneLoadComplete() const;


// Properties

 System::Nullable_1<GlobalNamespace::GlobalNamespace__OVRSceneManager__LogForwarder> __declspec(property(get=get_Verbose))  Verbose;


// Methods

/// @brief Method get_Verbose addr 0x2604eb4 size 0x68 virtual false final false
 System::Nullable_1<GlobalNamespace::GlobalNamespace__OVRSceneManager__LogForwarder> get_Verbose() ;

/// @brief Method Awake addr 0x2604f1c size 0x178 virtual false final false
 void Awake() ;

/// @brief Method OnTrackingSpaceChanged addr 0x2605148 size 0x4 virtual false final false
static void OnTrackingSpaceChanged(UnityEngine::Transform trackingSpace) ;

/// @brief Method Update addr 0x26052e0 size 0x4 virtual false final false
 void Update() ;

/// @brief Method UpdateAllSceneAnchors addr 0x260514c size 0x194 virtual false final false
static void UpdateAllSceneAnchors() ;

/// @brief Method UpdateSomeSceneAnchors addr 0x26052e4 size 0x130 virtual false final false
 void UpdateSomeSceneAnchors() ;

/// @brief Method LoadSceneModel addr 0x2605414 size 0xc virtual false final false
 bool LoadSceneModel() ;

/// @brief Method RequestSceneCapture addr 0x2605814 size 0x48 virtual false final false
 bool RequestSceneCapture() ;

/// @brief Method RequestSceneCapture addr 0x26058c8 size 0x2d8 virtual false final false
 bool RequestSceneCapture(System::Collections::Generic::IEnumerable_1<::StringW> requestedAnchorClassifications) ;

/// @brief Method RequestSceneCapture addr 0x260585c size 0x6c virtual false final false
 bool RequestSceneCapture(::StringW requestString) ;

/// @brief Method OnEnable addr 0x2605ba0 size 0x324 virtual false final false
 void OnEnable() ;

/// @brief Method OnDisable addr 0x2605ec4 size 0x2c8 virtual false final false
 void OnDisable() ;

/// @brief Method LoadSpatialEntities addr 0x2605420 size 0x3f4 virtual false final false
 bool LoadSpatialEntities() ;

/// @brief Method EnableComponentIfNecessary addr 0x2606fe0 size 0x338 virtual false final false
 bool EnableComponentIfNecessary(GlobalNamespace::OVRSpace space, System::Guid uuid, GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceComponentType componentType) ;

/// @brief Method OVRManager_SceneCaptureComplete addr 0x2607318 size 0x114 virtual false final false
 void OVRManager_SceneCaptureComplete(uint64_t requestId, bool result) ;

/// @brief Method IsComponentEnabled addr 0x260742c size 0x88 virtual false final false
static bool IsComponentEnabled(GlobalNamespace::OVRSpace space, GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceComponentType componentType) ;

/// @brief Method InstantiateSceneAnchor addr 0x26074b4 size 0x6c0 virtual false final false
 GlobalNamespace::OVRSceneAnchor InstantiateSceneAnchor(GlobalNamespace::OVRSpace space, System::Guid uuid, GlobalNamespace::OVRSceneAnchor prefab) ;

/// @brief Method OVRManager_SpaceQueryComplete addr 0x2607b74 size 0x294 virtual false final false
 void OVRManager_SpaceQueryComplete(uint64_t requestId, bool result) ;

/// @brief Method CheckForCompletion addr 0x2608694 size 0xcc virtual false final false
 void CheckForCompletion() ;

/// @brief Method OVRManager_SpaceSetComponentStatusComplete addr 0x2608760 size 0xe8 virtual false final false
 void OVRManager_SpaceSetComponentStatusComplete(uint64_t requestId, bool result, GlobalNamespace::OVRSpace space, System::Guid uuid, GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceComponentType componentType, bool isEnabled) ;

/// @brief Method ProcessQueryResult addr 0x2607e08 size 0x88c virtual false final false
 void ProcessQueryResult(GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceQueryResult queryResult) ;

static GlobalNamespace::OVRSceneManager New_ctor() ;

/// @brief Method .ctor addr 0x26088cc size 0x19c virtual false final false
 void _ctor() ;

/// @brief Method <Awake>b__28_0 addr 0x2608a68 size 0x60 virtual false final false
 int32_t _Awake_b__28_0(GlobalNamespace::OVRScenePlane planeA, GlobalNamespace::OVRScenePlane planeB) ;

/// @brief Method <Awake>g__TryGetUuid|28_1 addr 0x2608ac8 size 0x94 virtual false final false
 bool _Awake_g__TryGetUuid_28_1(GlobalNamespace::OVRScenePlane plane, ByRef<int32_t> index) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OVRSceneManager__QueryMode, "", "OVRSceneManager/QueryMode");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__OVRSceneManager__Classification);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OVRSceneManager__Classification, "", "OVRSceneManager/Classification");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__OVRSceneManager__Development);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OVRSceneManager__Development, "", "OVRSceneManager/Development");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__OVRSceneManager__RoomLayoutInformation);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OVRSceneManager__RoomLayoutInformation, "", "OVRSceneManager/RoomLayoutInformation");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__OVRSceneManager____c__DisplayClass47_0);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OVRSceneManager____c__DisplayClass47_0, "", "OVRSceneManager/<>c__DisplayClass47_0");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d, "", "OVRSceneManager/<>c__DisplayClass47_0/<<ProcessQueryResult>g__EnabledComponents|0>d");
NEED_NO_BOX(GlobalNamespace::OVRSceneManager);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRSceneManager, "", "OVRSceneManager");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OVRSceneManager__LogForwarder, "", "OVRSceneManager/LogForwarder");
