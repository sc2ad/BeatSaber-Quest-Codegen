#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/XR/OpenXR/Features/zzzz__OpenXRFeature_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace UnityEngine::XR::OpenXR::Features {
class UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__DeviceConfig;
}
namespace UnityEngine::XR::OpenXR::Features {
class UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionBinding;
}
namespace UnityEngine::XR::OpenXR::Features {
struct UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionType;
}
namespace UnityEngine::XR::OpenXR::Features {
class UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionMapConfig;
}
namespace UnityEngine::XR::OpenXR::Features {
class UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionConfig;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::XR::OpenXR::Features {
class UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__UserPaths;
}
namespace UnityEngine::XR {
struct InputDeviceCharacteristics;
}
// Forward declare root types
namespace UnityEngine::XR::OpenXR::Features {
struct UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionType;
}
namespace UnityEngine::XR::OpenXR::Features {
class OpenXRInteractionFeature;
}
namespace UnityEngine::XR::OpenXR::Features {
class UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionBinding;
}
namespace UnityEngine::XR::OpenXR::Features {
class UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionConfig;
}
namespace UnityEngine::XR::OpenXR::Features {
class UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionMapConfig;
}
namespace UnityEngine::XR::OpenXR::Features {
class UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__DeviceConfig;
}
namespace UnityEngine::XR::OpenXR::Features {
class UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__UserPaths;
}
// Type: ::ActionType
namespace UnityEngine::XR::OpenXR::Features {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14202))
// CS Name: UnityEngine.XR.OpenXR.Features.OpenXRInteractionFeature::ActionType
struct CORDL_TYPE UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionType(int32_t value__) noexcept;


                    constexpr UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionType(UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionType const&) = default;
                    constexpr UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionType(UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionType&&) = default;
                    constexpr UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionType& operator=(UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionType& operator=(UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionType_Unwrapped : int32_t {
__Binary = 0,
__Axis1D = 1,
__Axis2D = 2,
__Pose = 3,
__Vibrate = 4,
__Count = 5,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionType_Unwrapped () const noexcept {
return std::bit_cast<__UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionType_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Binary offset 0
static UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionType const Binary;

/// @brief Field Axis1D offset 0
static UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionType const Axis1D;

/// @brief Field Axis2D offset 0
static UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionType const Axis2D;

/// @brief Field Pose offset 0
static UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionType const Pose;

/// @brief Field Vibrate offset 0
static UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionType const Vibrate;

/// @brief Field Count offset 0
static UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionType const Count;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::XR::OpenXR::Features
// Type: ::ActionBinding
namespace UnityEngine::XR::OpenXR::Features {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14203))
// CS Name: UnityEngine.XR.OpenXR.Features.OpenXRInteractionFeature::ActionBinding
class CORDL_TYPE UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionBinding : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionBinding() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionBinding", modifiers: " const&", def_value: None }]
constexpr UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionBinding(UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionBinding const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionBinding", modifiers: "&&", def_value: None }]
constexpr UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionBinding(UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionBinding&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionBinding(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionBinding& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionBinding& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionBinding& operator=(UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionBinding&& o) noexcept = default;
  constexpr UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionBinding& operator=(UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionBinding const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_interactionProfileName, put=__set_interactionProfileName))  interactionProfileName;

constexpr void __set_interactionProfileName(::StringW value) ;

constexpr ::StringW __get_interactionProfileName() const;

 ::StringW __declspec(property(get=__get_interactionPath, put=__set_interactionPath))  interactionPath;

constexpr void __set_interactionPath(::StringW value) ;

constexpr ::StringW __get_interactionPath() const;

 System::Collections::Generic::List_1<::StringW> __declspec(property(get=__get_userPaths, put=__set_userPaths))  userPaths;

constexpr void __set_userPaths(System::Collections::Generic::List_1<::StringW> value) ;

constexpr System::Collections::Generic::List_1<::StringW> __get_userPaths() const;


// Methods

static UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionBinding New_ctor() ;

/// @brief Method .ctor addr 0x2af0b04 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::XR::OpenXR::Features
// Type: ::ActionConfig
namespace UnityEngine::XR::OpenXR::Features {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14204))
// CS Name: UnityEngine.XR.OpenXR.Features.OpenXRInteractionFeature::ActionConfig
class CORDL_TYPE UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionConfig : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionConfig() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionConfig", modifiers: " const&", def_value: None }]
constexpr UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionConfig(UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionConfig const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionConfig", modifiers: "&&", def_value: None }]
constexpr UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionConfig(UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionConfig&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionConfig(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionConfig& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionConfig& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionConfig& operator=(UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionConfig&& o) noexcept = default;
  constexpr UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionConfig& operator=(UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionConfig const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_name, put=__set_name))  name;

constexpr void __set_name(::StringW value) ;

constexpr ::StringW __get_name() const;

 UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionType __declspec(property(get=__get_type, put=__set_type))  type;

constexpr void __set_type(UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionType value) ;

constexpr UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionType __get_type() const;

 ::StringW __declspec(property(get=__get_localizedName, put=__set_localizedName))  localizedName;

constexpr void __set_localizedName(::StringW value) ;

constexpr ::StringW __get_localizedName() const;

 System::Collections::Generic::List_1<UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionBinding> __declspec(property(get=__get_bindings, put=__set_bindings))  bindings;

constexpr void __set_bindings(System::Collections::Generic::List_1<UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionBinding> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionBinding> __get_bindings() const;

 System::Collections::Generic::List_1<::StringW> __declspec(property(get=__get_usages, put=__set_usages))  usages;

constexpr void __set_usages(System::Collections::Generic::List_1<::StringW> value) ;

constexpr System::Collections::Generic::List_1<::StringW> __get_usages() const;


// Methods

static UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionConfig New_ctor() ;

/// @brief Method .ctor addr 0x2af0b0c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::XR::OpenXR::Features
// Type: ::DeviceConfig
namespace UnityEngine::XR::OpenXR::Features {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14205))
// CS Name: UnityEngine.XR.OpenXR.Features.OpenXRInteractionFeature::DeviceConfig
class CORDL_TYPE UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__DeviceConfig : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__DeviceConfig() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__DeviceConfig", modifiers: " const&", def_value: None }]
constexpr UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__DeviceConfig(UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__DeviceConfig const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__DeviceConfig", modifiers: "&&", def_value: None }]
constexpr UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__DeviceConfig(UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__DeviceConfig&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__DeviceConfig(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__DeviceConfig& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__DeviceConfig& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__DeviceConfig& operator=(UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__DeviceConfig&& o) noexcept = default;
  constexpr UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__DeviceConfig& operator=(UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__DeviceConfig const& o) noexcept = default;
                


// Fields

 UnityEngine::XR::InputDeviceCharacteristics __declspec(property(get=__get_characteristics, put=__set_characteristics))  characteristics;

constexpr void __set_characteristics(UnityEngine::XR::InputDeviceCharacteristics value) ;

constexpr UnityEngine::XR::InputDeviceCharacteristics __get_characteristics() const;

 ::StringW __declspec(property(get=__get_userPath, put=__set_userPath))  userPath;

constexpr void __set_userPath(::StringW value) ;

constexpr ::StringW __get_userPath() const;


// Methods

static UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__DeviceConfig New_ctor() ;

/// @brief Method .ctor addr 0x2af0b14 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::XR::OpenXR::Features
// Type: ::ActionMapConfig
namespace UnityEngine::XR::OpenXR::Features {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14206))
// CS Name: UnityEngine.XR.OpenXR.Features.OpenXRInteractionFeature::ActionMapConfig
class CORDL_TYPE UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionMapConfig : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionMapConfig() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionMapConfig", modifiers: " const&", def_value: None }]
constexpr UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionMapConfig(UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionMapConfig const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionMapConfig", modifiers: "&&", def_value: None }]
constexpr UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionMapConfig(UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionMapConfig&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionMapConfig(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionMapConfig& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionMapConfig& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionMapConfig& operator=(UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionMapConfig&& o) noexcept = default;
  constexpr UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionMapConfig& operator=(UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionMapConfig const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_name, put=__set_name))  name;

constexpr void __set_name(::StringW value) ;

constexpr ::StringW __get_name() const;

 ::StringW __declspec(property(get=__get_localizedName, put=__set_localizedName))  localizedName;

constexpr void __set_localizedName(::StringW value) ;

constexpr ::StringW __get_localizedName() const;

 System::Collections::Generic::List_1<UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__DeviceConfig> __declspec(property(get=__get_deviceInfos, put=__set_deviceInfos))  deviceInfos;

constexpr void __set_deviceInfos(System::Collections::Generic::List_1<UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__DeviceConfig> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__DeviceConfig> __get_deviceInfos() const;

 System::Collections::Generic::List_1<UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionConfig> __declspec(property(get=__get_actions, put=__set_actions))  actions;

constexpr void __set_actions(System::Collections::Generic::List_1<UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionConfig> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionConfig> __get_actions() const;

 ::StringW __declspec(property(get=__get_desiredInteractionProfile, put=__set_desiredInteractionProfile))  desiredInteractionProfile;

constexpr void __set_desiredInteractionProfile(::StringW value) ;

constexpr ::StringW __get_desiredInteractionProfile() const;

 ::StringW __declspec(property(get=__get_manufacturer, put=__set_manufacturer))  manufacturer;

constexpr void __set_manufacturer(::StringW value) ;

constexpr ::StringW __get_manufacturer() const;

 ::StringW __declspec(property(get=__get_serialNumber, put=__set_serialNumber))  serialNumber;

constexpr void __set_serialNumber(::StringW value) ;

constexpr ::StringW __get_serialNumber() const;


// Methods

static UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionMapConfig New_ctor() ;

/// @brief Method .ctor addr 0x2af0b1c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::XR::OpenXR::Features
// Type: ::UserPaths
namespace UnityEngine::XR::OpenXR::Features {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14207))
// CS Name: UnityEngine.XR.OpenXR.Features.OpenXRInteractionFeature::UserPaths
class CORDL_TYPE UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__UserPaths : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__UserPaths() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__UserPaths", modifiers: " const&", def_value: None }]
constexpr UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__UserPaths(UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__UserPaths const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__UserPaths", modifiers: "&&", def_value: None }]
constexpr UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__UserPaths(UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__UserPaths&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__UserPaths(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__UserPaths& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__UserPaths& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__UserPaths& operator=(UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__UserPaths&& o) noexcept = default;
  constexpr UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__UserPaths& operator=(UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__UserPaths const& o) noexcept = default;
                


// Fields

/// @brief Field leftHand offset 0
static constexpr ::ConstString  leftHand{u"/user/hand/left"};

/// @brief Field rightHand offset 0
static constexpr ::ConstString  rightHand{u"/user/hand/right"};

/// @brief Field head offset 0
static constexpr ::ConstString  head{u"/user/head"};

/// @brief Field gamepad offset 0
static constexpr ::ConstString  gamepad{u"/user/gamepad"};

/// @brief Field treadmill offset 0
static constexpr ::ConstString  treadmill{u"/user/treadmill"};

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::XR::OpenXR::Features
// Type: UnityEngine.XR.OpenXR.Features::OpenXRInteractionFeature
namespace UnityEngine::XR::OpenXR::Features {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14201))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14208))
// CS Name: UnityEngine.XR.OpenXR.Features.OpenXRInteractionFeature
class CORDL_TYPE OpenXRInteractionFeature : public UnityEngine::XR::OpenXR::Features::OpenXRFeature {
public:
// Declarations
using UserPaths = UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__UserPaths;

using ActionMapConfig = UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionMapConfig;

using DeviceConfig = UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__DeviceConfig;

using ActionConfig = UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionConfig;

using ActionBinding = UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionBinding;

using ActionType = UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionType;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~OpenXRInteractionFeature() = default;

// Ctor Parameters [CppParam { name: "", ty: "OpenXRInteractionFeature", modifiers: " const&", def_value: None }]
constexpr OpenXRInteractionFeature(OpenXRInteractionFeature const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OpenXRInteractionFeature", modifiers: "&&", def_value: None }]
constexpr OpenXRInteractionFeature(OpenXRInteractionFeature&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OpenXRInteractionFeature(void* ptr) noexcept : UnityEngine::XR::OpenXR::Features::OpenXRFeature(ptr) {
}


  constexpr OpenXRInteractionFeature& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OpenXRInteractionFeature& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OpenXRInteractionFeature& operator=(OpenXRInteractionFeature&& o) noexcept = default;
  constexpr OpenXRInteractionFeature& operator=(OpenXRInteractionFeature const& o) noexcept = default;
                


// Fields

static System::Collections::Generic::List_1<UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionMapConfig> __declspec(property(get=__get_m_CreatedActionMaps, put=__set_m_CreatedActionMaps))  m_CreatedActionMaps;

static void __set_m_CreatedActionMaps(System::Collections::Generic::List_1<UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionMapConfig> value) ;

static System::Collections::Generic::List_1<UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionMapConfig> __get_m_CreatedActionMaps() ;


// Methods

/// @brief Method RegisterDeviceLayout addr 0x2af0984 size 0x4 virtual true final false
 void RegisterDeviceLayout() ;

/// @brief Method UnregisterDeviceLayout addr 0x2af0988 size 0x4 virtual true final false
 void UnregisterDeviceLayout() ;

/// @brief Method RegisterActionMapsWithRuntime addr 0x2af098c size 0x4 virtual true final false
 void RegisterActionMapsWithRuntime() ;

/// @brief Method OnInstanceCreate addr 0x2af0990 size 0x20 virtual true final false
 bool OnInstanceCreate(uint64_t xrSession) ;

/// @brief Method CreateActionMaps addr 0x2aedb78 size 0x78 virtual false final false
 void CreateActionMaps(System::Collections::Generic::List_1<UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionMapConfig> configs) ;

/// @brief Method AddActionMap addr 0x2af09b0 size 0x148 virtual false final false
 void AddActionMap(UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionMapConfig map) ;

/// @brief Method OnEnabledChange addr 0x2af0af8 size 0x4 virtual true final false
 void OnEnabledChange() ;

/// @brief Method RegisterLayouts addr 0x2aed924 size 0x100 virtual false final false
static void RegisterLayouts() ;

static UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature New_ctor() ;

/// @brief Method .ctor addr 0x2af0afc size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::XR::OpenXR::Features
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionType, "UnityEngine.XR.OpenXR.Features", "OpenXRInteractionFeature/ActionType");
NEED_NO_BOX(UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature, "UnityEngine.XR.OpenXR.Features", "OpenXRInteractionFeature");
NEED_NO_BOX(UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionBinding);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionBinding, "UnityEngine.XR.OpenXR.Features", "OpenXRInteractionFeature/ActionBinding");
NEED_NO_BOX(UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionConfig);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionConfig, "UnityEngine.XR.OpenXR.Features", "OpenXRInteractionFeature/ActionConfig");
NEED_NO_BOX(UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionMapConfig);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionMapConfig, "UnityEngine.XR.OpenXR.Features", "OpenXRInteractionFeature/ActionMapConfig");
NEED_NO_BOX(UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__DeviceConfig);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__DeviceConfig, "UnityEngine.XR.OpenXR.Features", "OpenXRInteractionFeature/DeviceConfig");
NEED_NO_BOX(UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__UserPaths);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__UserPaths, "UnityEngine.XR.OpenXR.Features", "OpenXRInteractionFeature/UserPaths");
