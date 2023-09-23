#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace System {
template<typename T>
class IEquatable_1;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Layouts {
struct InputDeviceDescription;
}
namespace UnityEngine::InputSystem::Layouts {
struct UnityEngine__InputSystem__Layouts__InputDeviceDescription__DeviceDescriptionJson;
}
// Type: ::DeviceDescriptionJson
namespace UnityEngine::InputSystem::Layouts {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6702))
// CS Name: UnityEngine.InputSystem.Layouts.InputDeviceDescription::DeviceDescriptionJson
struct CORDL_TYPE UnityEngine__InputSystem__Layouts__InputDeviceDescription__DeviceDescriptionJson : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "interface", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "type", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "product", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "serial", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "version", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "manufacturer", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "capabilities", ty: "::StringW", modifiers: "", def_value: None }]
constexpr UnityEngine__InputSystem__Layouts__InputDeviceDescription__DeviceDescriptionJson(::StringW interface, ::StringW type, ::StringW product, ::StringW serial, ::StringW version, ::StringW manufacturer, ::StringW capabilities) noexcept;


                    constexpr UnityEngine__InputSystem__Layouts__InputDeviceDescription__DeviceDescriptionJson(UnityEngine__InputSystem__Layouts__InputDeviceDescription__DeviceDescriptionJson const&) = default;
                    constexpr UnityEngine__InputSystem__Layouts__InputDeviceDescription__DeviceDescriptionJson(UnityEngine__InputSystem__Layouts__InputDeviceDescription__DeviceDescriptionJson&&) = default;
                    constexpr UnityEngine__InputSystem__Layouts__InputDeviceDescription__DeviceDescriptionJson& operator=(UnityEngine__InputSystem__Layouts__InputDeviceDescription__DeviceDescriptionJson const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__InputSystem__Layouts__InputDeviceDescription__DeviceDescriptionJson& operator=(UnityEngine__InputSystem__Layouts__InputDeviceDescription__DeviceDescriptionJson&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x38};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__InputSystem__Layouts__InputDeviceDescription__DeviceDescriptionJson(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::StringW __declspec(property(get=__get_interface, put=__set_interface))  interface;

constexpr void __set_interface(::StringW value) ;

constexpr ::StringW __get_interface() const;

 ::StringW __declspec(property(get=__get_type, put=__set_type))  type;

constexpr void __set_type(::StringW value) ;

constexpr ::StringW __get_type() const;

 ::StringW __declspec(property(get=__get_product, put=__set_product))  product;

constexpr void __set_product(::StringW value) ;

constexpr ::StringW __get_product() const;

 ::StringW __declspec(property(get=__get_serial, put=__set_serial))  serial;

constexpr void __set_serial(::StringW value) ;

constexpr ::StringW __get_serial() const;

 ::StringW __declspec(property(get=__get_version, put=__set_version))  version;

constexpr void __set_version(::StringW value) ;

constexpr ::StringW __get_version() const;

 ::StringW __declspec(property(get=__get_manufacturer, put=__set_manufacturer))  manufacturer;

constexpr void __set_manufacturer(::StringW value) ;

constexpr ::StringW __get_manufacturer() const;

 ::StringW __declspec(property(get=__get_capabilities, put=__set_capabilities))  capabilities;

constexpr void __set_capabilities(::StringW value) ;

constexpr ::StringW __get_capabilities() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Layouts
// Type: UnityEngine.InputSystem.Layouts::InputDeviceDescription
namespace UnityEngine::InputSystem::Layouts {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6703))
// CS Name: UnityEngine.InputSystem.Layouts.InputDeviceDescription
struct CORDL_TYPE InputDeviceDescription : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using DeviceDescriptionJson = UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceDescription__DeviceDescriptionJson;

/// @brief Convert operator to System::IEquatable_1<UnityEngine::InputSystem::Layouts::InputDeviceDescription>
constexpr operator  System::IEquatable_1<UnityEngine::InputSystem::Layouts::InputDeviceDescription>() const;

// Ctor Parameters [CppParam { name: "m_InterfaceName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "m_DeviceClass", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "m_Manufacturer", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "m_Product", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "m_Serial", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "m_Version", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "m_Capabilities", ty: "::StringW", modifiers: "", def_value: None }]
constexpr InputDeviceDescription(::StringW m_InterfaceName, ::StringW m_DeviceClass, ::StringW m_Manufacturer, ::StringW m_Product, ::StringW m_Serial, ::StringW m_Version, ::StringW m_Capabilities) noexcept;


                    constexpr InputDeviceDescription(InputDeviceDescription const&) = default;
                    constexpr InputDeviceDescription(InputDeviceDescription&&) = default;
                    constexpr InputDeviceDescription& operator=(InputDeviceDescription const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr InputDeviceDescription& operator=(InputDeviceDescription&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x38};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit InputDeviceDescription(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::StringW __declspec(property(get=__get_m_InterfaceName, put=__set_m_InterfaceName))  m_InterfaceName;

constexpr void __set_m_InterfaceName(::StringW value) ;

constexpr ::StringW __get_m_InterfaceName() const;

 ::StringW __declspec(property(get=__get_m_DeviceClass, put=__set_m_DeviceClass))  m_DeviceClass;

constexpr void __set_m_DeviceClass(::StringW value) ;

constexpr ::StringW __get_m_DeviceClass() const;

 ::StringW __declspec(property(get=__get_m_Manufacturer, put=__set_m_Manufacturer))  m_Manufacturer;

constexpr void __set_m_Manufacturer(::StringW value) ;

constexpr ::StringW __get_m_Manufacturer() const;

 ::StringW __declspec(property(get=__get_m_Product, put=__set_m_Product))  m_Product;

constexpr void __set_m_Product(::StringW value) ;

constexpr ::StringW __get_m_Product() const;

 ::StringW __declspec(property(get=__get_m_Serial, put=__set_m_Serial))  m_Serial;

constexpr void __set_m_Serial(::StringW value) ;

constexpr ::StringW __get_m_Serial() const;

 ::StringW __declspec(property(get=__get_m_Version, put=__set_m_Version))  m_Version;

constexpr void __set_m_Version(::StringW value) ;

constexpr ::StringW __get_m_Version() const;

 ::StringW __declspec(property(get=__get_m_Capabilities, put=__set_m_Capabilities))  m_Capabilities;

constexpr void __set_m_Capabilities(::StringW value) ;

constexpr ::StringW __get_m_Capabilities() const;


// Properties

 ::StringW __declspec(property(get=get_interfaceName, put=set_interfaceName))  interfaceName;

 ::StringW __declspec(property(get=get_deviceClass, put=set_deviceClass))  deviceClass;

 ::StringW __declspec(property(get=get_manufacturer, put=set_manufacturer))  manufacturer;

 ::StringW __declspec(property(get=get_product, put=set_product))  product;

 ::StringW __declspec(property(get=get_serial, put=set_serial))  serial;

 ::StringW __declspec(property(get=get_version, put=set_version))  version;

 ::StringW __declspec(property(get=get_capabilities, put=set_capabilities))  capabilities;

 bool __declspec(property(get=get_empty))  empty;


// Methods

/// @brief Method get_interfaceName addr 0x2973fd8 size 0x8 virtual false final false
 ::StringW get_interfaceName() ;

/// @brief Method set_interfaceName addr 0x2973fe0 size 0x8 virtual false final false
 void set_interfaceName(::StringW value) ;

/// @brief Method get_deviceClass addr 0x2973fe8 size 0x8 virtual false final false
 ::StringW get_deviceClass() ;

/// @brief Method set_deviceClass addr 0x2973ff0 size 0x8 virtual false final false
 void set_deviceClass(::StringW value) ;

/// @brief Method get_manufacturer addr 0x2973ff8 size 0x8 virtual false final false
 ::StringW get_manufacturer() ;

/// @brief Method set_manufacturer addr 0x2974000 size 0x8 virtual false final false
 void set_manufacturer(::StringW value) ;

/// @brief Method get_product addr 0x2974008 size 0x8 virtual false final false
 ::StringW get_product() ;

/// @brief Method set_product addr 0x2974010 size 0x8 virtual false final false
 void set_product(::StringW value) ;

/// @brief Method get_serial addr 0x2974018 size 0x8 virtual false final false
 ::StringW get_serial() ;

/// @brief Method set_serial addr 0x2974020 size 0x8 virtual false final false
 void set_serial(::StringW value) ;

/// @brief Method get_version addr 0x2974028 size 0x8 virtual false final false
 ::StringW get_version() ;

/// @brief Method set_version addr 0x2974030 size 0x8 virtual false final false
 void set_version(::StringW value) ;

/// @brief Method get_capabilities addr 0x2974038 size 0x8 virtual false final false
 ::StringW get_capabilities() ;

/// @brief Method set_capabilities addr 0x2974040 size 0x8 virtual false final false
 void set_capabilities(::StringW value) ;

/// @brief Method get_empty addr 0x2974048 size 0x84 virtual false final false
 bool get_empty() ;

/// @brief Method ToString addr 0x29740cc size 0x304 virtual true final false
 ::StringW ToString() ;

/// @brief Method Equals addr 0x29743d0 size 0xb0 virtual true final true
 bool Equals(UnityEngine::InputSystem::Layouts::InputDeviceDescription other) ;

/// @brief Method Equals addr 0x2974480 size 0x98 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x2974518 size 0x128 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method op_Equality addr 0x2974640 size 0x38 virtual false final false
static bool op_Equality(UnityEngine::InputSystem::Layouts::InputDeviceDescription left, UnityEngine::InputSystem::Layouts::InputDeviceDescription right) ;

/// @brief Method op_Inequality addr 0x2974678 size 0x3c virtual false final false
static bool op_Inequality(UnityEngine::InputSystem::Layouts::InputDeviceDescription left, UnityEngine::InputSystem::Layouts::InputDeviceDescription right) ;

/// @brief Method ToJson addr 0x29746b4 size 0x80 virtual false final false
 ::StringW ToJson() ;

/// @brief Method FromJson addr 0x2974734 size 0xcc virtual false final false
static UnityEngine::InputSystem::Layouts::InputDeviceDescription FromJson(::StringW json) ;

/// @brief Method ComparePropertyToDeviceDescriptor addr 0x2974800 size 0x90 virtual false final false
static bool ComparePropertyToDeviceDescriptor(::StringW propertyName, ::StringW propertyValue, ::StringW deviceDescriptor) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Layouts
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::Layouts::InputDeviceDescription, "UnityEngine.InputSystem.Layouts", "InputDeviceDescription");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceDescription__DeviceDescriptionJson, "UnityEngine.InputSystem.Layouts", "InputDeviceDescription/DeviceDescriptionJson");
