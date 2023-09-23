#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System {
class Version;
}
namespace System {
struct PlatformID;
}
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace System {
class ICloneable;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
// Forward declare root types
namespace System {
class OperatingSystem;
}
// Type: System::OperatingSystem
namespace System {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2525))
// CS Name: System.OperatingSystem
class CORDL_TYPE OperatingSystem : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Runtime::Serialization::ISerializable
constexpr operator  System::Runtime::Serialization::ISerializable() const noexcept;

/// @brief Convert operator to System::ICloneable
constexpr operator  System::ICloneable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~OperatingSystem() = default;

// Ctor Parameters [CppParam { name: "", ty: "OperatingSystem", modifiers: " const&", def_value: None }]
constexpr OperatingSystem(OperatingSystem const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OperatingSystem", modifiers: "&&", def_value: None }]
constexpr OperatingSystem(OperatingSystem&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OperatingSystem(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr OperatingSystem& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OperatingSystem& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OperatingSystem& operator=(OperatingSystem&& o) noexcept = default;
  constexpr OperatingSystem& operator=(OperatingSystem const& o) noexcept = default;
                


// Fields

 System::Version __declspec(property(get=__get__version, put=__set__version))  _version;

constexpr void __set__version(System::Version value) ;

constexpr System::Version __get__version() const;

 System::PlatformID __declspec(property(get=__get__platform, put=__set__platform))  _platform;

constexpr void __set__platform(System::PlatformID value) ;

constexpr System::PlatformID __get__platform() const;

 ::StringW __declspec(property(get=__get__servicePack, put=__set__servicePack))  _servicePack;

constexpr void __set__servicePack(::StringW value) ;

constexpr ::StringW __get__servicePack() const;

 ::StringW __declspec(property(get=__get__versionString, put=__set__versionString))  _versionString;

constexpr void __set__versionString(::StringW value) ;

constexpr ::StringW __get__versionString() const;


// Properties

 System::PlatformID __declspec(property(get=get_Platform))  Platform;

 ::StringW __declspec(property(get=get_VersionString))  VersionString;


// Methods

// Ctor Parameters [CppParam { name: "platform", ty: "System::PlatformID", modifiers: "", def_value: None }, CppParam { name: "version", ty: "System::Version", modifiers: "", def_value: None }]
explicit OperatingSystem(System::PlatformID platform, System::Version version) ;

/// @brief Method .ctor addr 0x2462f74 size 0x8 virtual false final false
 void _ctor(System::PlatformID platform, System::Version version) ;

// Ctor Parameters [CppParam { name: "platform", ty: "System::PlatformID", modifiers: "", def_value: None }, CppParam { name: "version", ty: "System::Version", modifiers: "", def_value: None }, CppParam { name: "servicePack", ty: "::StringW", modifiers: "", def_value: None }]
explicit OperatingSystem(System::PlatformID platform, System::Version version, ::StringW servicePack) ;

/// @brief Method .ctor addr 0x2462f7c size 0x140 virtual false final false
 void _ctor(System::PlatformID platform, System::Version version, ::StringW servicePack) ;

/// @brief Method GetObjectData addr 0x24630bc size 0x3c virtual true final true
 void GetObjectData(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method get_Platform addr 0x24630f8 size 0x8 virtual false final false
 System::PlatformID get_Platform() ;

/// @brief Method Clone addr 0x2463100 size 0x7c virtual true final true
 ::bs_hook::Il2CppWrapperType Clone() ;

/// @brief Method ToString addr 0x246317c size 0x4 virtual true final false
 ::StringW ToString() ;

/// @brief Method get_VersionString addr 0x2463180 size 0x1cc virtual false final false
 ::StringW get_VersionString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
NEED_NO_BOX(System::OperatingSystem);
DEFINE_IL2CPP_ARG_TYPE(System::OperatingSystem, "System", "OperatingSystem");
