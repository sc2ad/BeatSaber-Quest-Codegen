#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace GlobalNamespace {
struct ____GlobalNamespace__SonyContentVersion__VersionFormat;
}
namespace GlobalNamespace {
class SonyContentVersion;
}
// Type: ::VersionFormat
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4657))
// CS Name: SonyContentVersion::VersionFormat
struct CORDL_TYPE ____GlobalNamespace__SonyContentVersion__VersionFormat : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____GlobalNamespace__SonyContentVersion__VersionFormat(int32_t value__) noexcept;


                    constexpr ____GlobalNamespace__SonyContentVersion__VersionFormat(____GlobalNamespace__SonyContentVersion__VersionFormat const&) = default;
                    constexpr ____GlobalNamespace__SonyContentVersion__VersionFormat(____GlobalNamespace__SonyContentVersion__VersionFormat&&) = default;
                    constexpr ____GlobalNamespace__SonyContentVersion__VersionFormat& operator=(____GlobalNamespace__SonyContentVersion__VersionFormat const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____GlobalNamespace__SonyContentVersion__VersionFormat& operator=(____GlobalNamespace__SonyContentVersion__VersionFormat&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__SonyContentVersion__VersionFormat(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______GlobalNamespace__SonyContentVersion__VersionFormat_Unwrapped : int32_t {
__Long = 0,
__Short = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______GlobalNamespace__SonyContentVersion__VersionFormat_Unwrapped () const noexcept {
return std::bit_cast<______GlobalNamespace__SonyContentVersion__VersionFormat_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Long offset 0
static ::GlobalNamespace::____GlobalNamespace__SonyContentVersion__VersionFormat const Long;

/// @brief Field Short offset 0
static ::GlobalNamespace::____GlobalNamespace__SonyContentVersion__VersionFormat const Short;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::SonyContentVersion
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4658))
// CS Name: SonyContentVersion
class CORDL_TYPE SonyContentVersion : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using VersionFormat = ::GlobalNamespace::____GlobalNamespace__SonyContentVersion__VersionFormat;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~SonyContentVersion() = default;

// Ctor Parameters [CppParam { name: "", ty: "SonyContentVersion", modifiers: " const&", def_value: None }]
constexpr SonyContentVersion(SonyContentVersion const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SonyContentVersion", modifiers: "&&", def_value: None }]
constexpr SonyContentVersion(SonyContentVersion&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SonyContentVersion(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SonyContentVersion& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SonyContentVersion& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SonyContentVersion& operator=(SonyContentVersion&& o) noexcept = default;
  constexpr SonyContentVersion& operator=(SonyContentVersion const& o) noexcept = default;
                


// Fields

 uint32_t __declspec(property(get=__get__majorVersion, put=__set__majorVersion))  _majorVersion;

constexpr void __set__majorVersion(uint32_t value) ;

constexpr uint32_t __get__majorVersion() const;

 uint32_t __declspec(property(get=__get__minorVersion, put=__set__minorVersion))  _minorVersion;

constexpr void __set__minorVersion(uint32_t value) ;

constexpr uint32_t __get__minorVersion() const;

 uint32_t __declspec(property(get=__get__revision, put=__set__revision))  _revision;

constexpr void __set__revision(uint32_t value) ;

constexpr uint32_t __get__revision() const;


// Properties

 uint32_t __declspec(property(get=get_majorVersion))  majorVersion;

 uint32_t __declspec(property(get=get_minorVersion))  minorVersion;

 uint32_t __declspec(property(get=get_revision))  revision;


// Methods

/// @brief Method get_majorVersion addr 0x221a8c8 size 0x8 virtual false final false
 uint32_t get_majorVersion() ;

/// @brief Method get_minorVersion addr 0x221a8d0 size 0x8 virtual false final false
 uint32_t get_minorVersion() ;

/// @brief Method get_revision addr 0x221a8d8 size 0x8 virtual false final false
 uint32_t get_revision() ;

// Ctor Parameters [CppParam { name: "majorVersion", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "minorVersion", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "revision", ty: "uint32_t", modifiers: "", def_value: None }]
explicit SonyContentVersion(uint32_t majorVersion, uint32_t minorVersion, uint32_t revision) ;

/// @brief Method .ctor addr 0x221a8e0 size 0x3c virtual false final false
 void _ctor(uint32_t majorVersion, uint32_t minorVersion, uint32_t revision) ;

/// @brief Method GetFromString addr 0x221a91c size 0x33c virtual false final false
static ::GlobalNamespace::SonyContentVersion GetFromString(::StringW versionString) ;

/// @brief Method IsVersionFormatValid addr 0x221ac58 size 0x90 virtual false final false
static bool IsVersionFormatValid(::StringW versionString) ;

/// @brief Method Get addr 0x221ace8 size 0x178 virtual false final false
 ::StringW Get(::GlobalNamespace::____GlobalNamespace__SonyContentVersion__VersionFormat versionFormat) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__SonyContentVersion__VersionFormat, "", "SonyContentVersion/VersionFormat");
NEED_NO_BOX(::GlobalNamespace::SonyContentVersion);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SonyContentVersion, "", "SonyContentVersion");
