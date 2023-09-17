#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace GlobalNamespace {
struct ____GlobalNamespace__UserInfo__Platform;
}
namespace GlobalNamespace {
class UserInfo;
}
// Type: ::Platform
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4711))
// CS Name: UserInfo::Platform
struct CORDL_TYPE ____GlobalNamespace__UserInfo__Platform : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____GlobalNamespace__UserInfo__Platform(int32_t value__) noexcept;


                    constexpr ____GlobalNamespace__UserInfo__Platform(____GlobalNamespace__UserInfo__Platform const&) = default;
                    constexpr ____GlobalNamespace__UserInfo__Platform(____GlobalNamespace__UserInfo__Platform&&) = default;
                    constexpr ____GlobalNamespace__UserInfo__Platform& operator=(____GlobalNamespace__UserInfo__Platform const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____GlobalNamespace__UserInfo__Platform& operator=(____GlobalNamespace__UserInfo__Platform&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__UserInfo__Platform(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______GlobalNamespace__UserInfo__Platform_Unwrapped : int32_t {
__Test = 0,
__Steam = 1,
__Oculus = 2,
__PS4 = 3,
__PS5 = 4,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______GlobalNamespace__UserInfo__Platform_Unwrapped () const noexcept {
return std::bit_cast<______GlobalNamespace__UserInfo__Platform_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Test offset 0
static ::GlobalNamespace::____GlobalNamespace__UserInfo__Platform const Test;

/// @brief Field Steam offset 0
static ::GlobalNamespace::____GlobalNamespace__UserInfo__Platform const Steam;

/// @brief Field Oculus offset 0
static ::GlobalNamespace::____GlobalNamespace__UserInfo__Platform const Oculus;

/// @brief Field PS4 offset 0
static ::GlobalNamespace::____GlobalNamespace__UserInfo__Platform const PS4;

/// @brief Field PS5 offset 0
static ::GlobalNamespace::____GlobalNamespace__UserInfo__Platform const PS5;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::UserInfo
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4712))
// CS Name: UserInfo
class CORDL_TYPE UserInfo : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using Platform = ::GlobalNamespace::____GlobalNamespace__UserInfo__Platform;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~UserInfo() = default;

// Ctor Parameters [CppParam { name: "", ty: "UserInfo", modifiers: " const&", def_value: None }]
constexpr UserInfo(UserInfo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UserInfo", modifiers: "&&", def_value: None }]
constexpr UserInfo(UserInfo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UserInfo(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UserInfo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UserInfo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UserInfo& operator=(UserInfo&& o) noexcept = default;
  constexpr UserInfo& operator=(UserInfo const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::____GlobalNamespace__UserInfo__Platform __declspec(property(get=__get_platform, put=__set_platform))  platform;

constexpr void __set_platform(::GlobalNamespace::____GlobalNamespace__UserInfo__Platform value) ;

constexpr ::GlobalNamespace::____GlobalNamespace__UserInfo__Platform __get_platform() const;

 ::StringW __declspec(property(get=__get_platformUserId, put=__set_platformUserId))  platformUserId;

constexpr void __set_platformUserId(::StringW value) ;

constexpr ::StringW __get_platformUserId() const;

 ::StringW __declspec(property(get=__get_userName, put=__set_userName))  userName;

constexpr void __set_userName(::StringW value) ;

constexpr ::StringW __get_userName() const;


// Methods

// Ctor Parameters [CppParam { name: "platform", ty: "::GlobalNamespace::____GlobalNamespace__UserInfo__Platform", modifiers: "", def_value: None }, CppParam { name: "platformUserId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "userName", ty: "::StringW", modifiers: "", def_value: None }]
explicit UserInfo(::GlobalNamespace::____GlobalNamespace__UserInfo__Platform platform, ::StringW platformUserId, ::StringW userName) ;

/// @brief Method .ctor addr 0x221da98 size 0x3c virtual false final false
 void _ctor(::GlobalNamespace::____GlobalNamespace__UserInfo__Platform platform, ::StringW platformUserId, ::StringW userName) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__UserInfo__Platform, "", "UserInfo/Platform");
NEED_NO_BOX(::GlobalNamespace::UserInfo);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::UserInfo, "", "UserInfo");
