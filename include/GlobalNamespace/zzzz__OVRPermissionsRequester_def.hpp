#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace System {
template<typename T>
class Action_1;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRPermissionsRequester__Permission;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace UnityEngine::Android {
class PermissionCallbacks;
}
namespace GlobalNamespace {
class GlobalNamespace__OVRPermissionsRequester____c;
}
// Forward declare root types
namespace GlobalNamespace {
struct GlobalNamespace__OVRPermissionsRequester__Permission;
}
namespace GlobalNamespace {
class GlobalNamespace__OVRPermissionsRequester____c;
}
namespace GlobalNamespace {
class OVRPermissionsRequester;
}
// Type: ::Permission
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8572))
// CS Name: OVRPermissionsRequester::Permission
struct CORDL_TYPE GlobalNamespace__OVRPermissionsRequester__Permission : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__OVRPermissionsRequester__Permission(int32_t value__) noexcept;


                    constexpr GlobalNamespace__OVRPermissionsRequester__Permission(GlobalNamespace__OVRPermissionsRequester__Permission const&) = default;
                    constexpr GlobalNamespace__OVRPermissionsRequester__Permission(GlobalNamespace__OVRPermissionsRequester__Permission&&) = default;
                    constexpr GlobalNamespace__OVRPermissionsRequester__Permission& operator=(GlobalNamespace__OVRPermissionsRequester__Permission const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__OVRPermissionsRequester__Permission& operator=(GlobalNamespace__OVRPermissionsRequester__Permission&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OVRPermissionsRequester__Permission(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__OVRPermissionsRequester__Permission_Unwrapped : int32_t {
__FaceTracking = 0,
__BodyTracking = 1,
__EyeTracking = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__OVRPermissionsRequester__Permission_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__OVRPermissionsRequester__Permission_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field FaceTracking offset 0
static GlobalNamespace::GlobalNamespace__OVRPermissionsRequester__Permission const FaceTracking;

/// @brief Field BodyTracking offset 0
static GlobalNamespace::GlobalNamespace__OVRPermissionsRequester__Permission const BodyTracking;

/// @brief Field EyeTracking offset 0
static GlobalNamespace::GlobalNamespace__OVRPermissionsRequester__Permission const EyeTracking;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8573))
// CS Name: OVRPermissionsRequester::<>c
class CORDL_TYPE GlobalNamespace__OVRPermissionsRequester____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GlobalNamespace__OVRPermissionsRequester____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__OVRPermissionsRequester____c", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__OVRPermissionsRequester____c(GlobalNamespace__OVRPermissionsRequester____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__OVRPermissionsRequester____c", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__OVRPermissionsRequester____c(GlobalNamespace__OVRPermissionsRequester____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OVRPermissionsRequester____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__OVRPermissionsRequester____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__OVRPermissionsRequester____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__OVRPermissionsRequester____c& operator=(GlobalNamespace__OVRPermissionsRequester____c&& o) noexcept = default;
  constexpr GlobalNamespace__OVRPermissionsRequester____c& operator=(GlobalNamespace__OVRPermissionsRequester____c const& o) noexcept = default;
                


// Fields

static GlobalNamespace::GlobalNamespace__OVRPermissionsRequester____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(GlobalNamespace::GlobalNamespace__OVRPermissionsRequester____c value) ;

static GlobalNamespace::GlobalNamespace__OVRPermissionsRequester____c __get___9() ;

static System::Action_1<::StringW> __declspec(property(get=__get___9__12_0, put=__set___9__12_0))  __9__12_0;

static void __set___9__12_0(System::Action_1<::StringW> value) ;

static System::Action_1<::StringW> __get___9__12_0() ;

static System::Action_1<::StringW> __declspec(property(get=__get___9__12_1, put=__set___9__12_1))  __9__12_1;

static void __set___9__12_1(System::Action_1<::StringW> value) ;

static System::Action_1<::StringW> __get___9__12_1() ;

static System::Action_1<::StringW> __declspec(property(get=__get___9__12_2, put=__set___9__12_2))  __9__12_2;

static void __set___9__12_2(System::Action_1<::StringW> value) ;

static System::Action_1<::StringW> __get___9__12_2() ;


// Methods

static GlobalNamespace::GlobalNamespace__OVRPermissionsRequester____c New_ctor() ;

/// @brief Method .ctor addr 0x25dcad8 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <BuildPermissionCallbacks>b__12_0 addr 0x25dcae0 size 0xa4 virtual false final false
 void _BuildPermissionCallbacks_b__12_0(::StringW permissionId) ;

/// @brief Method <BuildPermissionCallbacks>b__12_1 addr 0x25dcb84 size 0xa4 virtual false final false
 void _BuildPermissionCallbacks_b__12_1(::StringW permissionId) ;

/// @brief Method <BuildPermissionCallbacks>b__12_2 addr 0x25dcc28 size 0xec virtual false final false
 void _BuildPermissionCallbacks_b__12_2(::StringW permissionId) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::OVRPermissionsRequester
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8574))
// CS Name: OVRPermissionsRequester
class CORDL_TYPE OVRPermissionsRequester : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c = GlobalNamespace::GlobalNamespace__OVRPermissionsRequester____c;

using Permission = GlobalNamespace::GlobalNamespace__OVRPermissionsRequester__Permission;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~OVRPermissionsRequester() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRPermissionsRequester", modifiers: " const&", def_value: None }]
constexpr OVRPermissionsRequester(OVRPermissionsRequester const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRPermissionsRequester", modifiers: "&&", def_value: None }]
constexpr OVRPermissionsRequester(OVRPermissionsRequester&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVRPermissionsRequester(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr OVRPermissionsRequester& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVRPermissionsRequester& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVRPermissionsRequester& operator=(OVRPermissionsRequester&& o) noexcept = default;
  constexpr OVRPermissionsRequester& operator=(OVRPermissionsRequester const& o) noexcept = default;
                


// Fields

static System::Action_1<::StringW> __declspec(property(get=__get_PermissionGranted, put=__set_PermissionGranted))  PermissionGranted;

static void __set_PermissionGranted(System::Action_1<::StringW> value) ;

static System::Action_1<::StringW> __get_PermissionGranted() ;

/// @brief Field FaceTrackingPermission offset 0
static constexpr ::ConstString  FaceTrackingPermission{u"com.oculus.permission.FACE_TRACKING"};

/// @brief Field EyeTrackingPermission offset 0
static constexpr ::ConstString  EyeTrackingPermission{u"com.oculus.permission.EYE_TRACKING"};

/// @brief Field BodyTrackingPermission offset 0
static constexpr ::ConstString  BodyTrackingPermission{u"com.oculus.permission.BODY_TRACKING"};


// Methods

/// @brief Method add_PermissionGranted addr 0x25dbd60 size 0xcc virtual false final false
static void add_PermissionGranted(System::Action_1<::StringW> value) ;

/// @brief Method remove_PermissionGranted addr 0x25dbe2c size 0xcc virtual false final false
static void remove_PermissionGranted(System::Action_1<::StringW> value) ;

/// @brief Method GetPermissionId addr 0x25dbef8 size 0xd8 virtual false final false
static ::StringW GetPermissionId(GlobalNamespace::GlobalNamespace__OVRPermissionsRequester__Permission permission) ;

/// @brief Method IsPermissionSupportedByPlatform addr 0x25dbfd0 size 0x10c virtual false final false
static bool IsPermissionSupportedByPlatform(GlobalNamespace::GlobalNamespace__OVRPermissionsRequester__Permission permission) ;

/// @brief Method IsPermissionGranted addr 0x25dc34c size 0x14 virtual false final false
static bool IsPermissionGranted(GlobalNamespace::GlobalNamespace__OVRPermissionsRequester__Permission permission) ;

/// @brief Method Request addr 0x25dc360 size 0x3f4 virtual false final false
static void Request(System::Collections::Generic::IEnumerable_1<GlobalNamespace::GlobalNamespace__OVRPermissionsRequester__Permission> permissions) ;

/// @brief Method ShouldRequestPermission addr 0x25dc754 size 0xfc virtual false final false
static bool ShouldRequestPermission(GlobalNamespace::GlobalNamespace__OVRPermissionsRequester__Permission permission) ;

/// @brief Method BuildPermissionCallbacks addr 0x25dc850 size 0x224 virtual false final false
static UnityEngine::Android::PermissionCallbacks BuildPermissionCallbacks() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OVRPermissionsRequester__Permission, "", "OVRPermissionsRequester/Permission");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__OVRPermissionsRequester____c);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OVRPermissionsRequester____c, "", "OVRPermissionsRequester/<>c");
NEED_NO_BOX(GlobalNamespace::OVRPermissionsRequester);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRPermissionsRequester, "", "OVRPermissionsRequester");
