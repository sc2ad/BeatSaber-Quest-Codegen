#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace GlobalNamespace {
struct GlobalNamespace__SonyVersion__VersionFormat;
}
// Forward declare root types
namespace GlobalNamespace {
struct GlobalNamespace__SonyVersion__VersionFormat;
}
namespace GlobalNamespace {
class SonyVersion;
}
// Type: ::VersionFormat
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4691))
// CS Name: SonyVersion::VersionFormat
struct CORDL_TYPE GlobalNamespace__SonyVersion__VersionFormat : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__SonyVersion__VersionFormat(int32_t value__) noexcept;


                    constexpr GlobalNamespace__SonyVersion__VersionFormat(GlobalNamespace__SonyVersion__VersionFormat const&) = default;
                    constexpr GlobalNamespace__SonyVersion__VersionFormat(GlobalNamespace__SonyVersion__VersionFormat&&) = default;
                    constexpr GlobalNamespace__SonyVersion__VersionFormat& operator=(GlobalNamespace__SonyVersion__VersionFormat const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__SonyVersion__VersionFormat& operator=(GlobalNamespace__SonyVersion__VersionFormat&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__SonyVersion__VersionFormat(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__SonyVersion__VersionFormat_Unwrapped : int32_t {
__FullLong = 0,
__Long = 1,
__FullShort = 2,
__Short = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__SonyVersion__VersionFormat_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__SonyVersion__VersionFormat_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field FullLong offset 0
static GlobalNamespace::GlobalNamespace__SonyVersion__VersionFormat const FullLong;

/// @brief Field Long offset 0
static GlobalNamespace::GlobalNamespace__SonyVersion__VersionFormat const Long;

/// @brief Field FullShort offset 0
static GlobalNamespace::GlobalNamespace__SonyVersion__VersionFormat const FullShort;

/// @brief Field Short offset 0
static GlobalNamespace::GlobalNamespace__SonyVersion__VersionFormat const Short;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::SonyVersion
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4692))
// CS Name: SonyVersion
class CORDL_TYPE SonyVersion : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using VersionFormat = GlobalNamespace::GlobalNamespace__SonyVersion__VersionFormat;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~SonyVersion() = default;

// Ctor Parameters [CppParam { name: "", ty: "SonyVersion", modifiers: " const&", def_value: None }]
constexpr SonyVersion(SonyVersion const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SonyVersion", modifiers: "&&", def_value: None }]
constexpr SonyVersion(SonyVersion&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SonyVersion(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SonyVersion& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SonyVersion& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SonyVersion& operator=(SonyVersion&& o) noexcept = default;
  constexpr SonyVersion& operator=(SonyVersion const& o) noexcept = default;
                


// Fields

 uint32_t __declspec(property(get=__get__majorVersion, put=__set__majorVersion))  _majorVersion;

constexpr void __set__majorVersion(uint32_t value) ;

constexpr uint32_t __get__majorVersion() const;

 uint32_t __declspec(property(get=__get__minorVersion, put=__set__minorVersion))  _minorVersion;

constexpr void __set__minorVersion(uint32_t value) ;

constexpr uint32_t __get__minorVersion() const;


// Properties

 uint32_t __declspec(property(get=get_majorVersion))  majorVersion;

 uint32_t __declspec(property(get=get_minorVersion))  minorVersion;


// Methods

/// @brief Method get_majorVersion addr 0x221c488 size 0x8 virtual false final false
 uint32_t get_majorVersion() ;

/// @brief Method get_minorVersion addr 0x221c490 size 0x8 virtual false final false
 uint32_t get_minorVersion() ;

static GlobalNamespace::SonyVersion New_ctor(uint32_t majorVersion, uint32_t minorVersion) ;

/// @brief Method .ctor addr 0x221c498 size 0x2c virtual false final false
 void _ctor(uint32_t majorVersion, uint32_t minorVersion) ;

/// @brief Method GetFromString addr 0x221c4c4 size 0x550 virtual false final false
static GlobalNamespace::SonyVersion GetFromString(::StringW versionString) ;

/// @brief Method IsVersionFormatValid addr 0x221ca14 size 0x90 virtual false final false
static bool IsVersionFormatValid(::StringW versionString) ;

/// @brief Method Get addr 0x221caa4 size 0x200 virtual false final false
 ::StringW Get(GlobalNamespace::GlobalNamespace__SonyVersion__VersionFormat format) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__SonyVersion__VersionFormat, "", "SonyVersion/VersionFormat");
NEED_NO_BOX(GlobalNamespace::SonyVersion);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SonyVersion, "", "SonyVersion");
