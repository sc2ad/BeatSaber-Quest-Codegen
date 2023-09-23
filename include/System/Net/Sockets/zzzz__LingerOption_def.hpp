#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
// Forward declare root types
namespace System::Net::Sockets {
class LingerOption;
}
// Type: System.Net.Sockets::LingerOption
namespace System::Net::Sockets {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8192))
// CS Name: System.Net.Sockets.LingerOption
class CORDL_TYPE LingerOption : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~LingerOption() = default;

// Ctor Parameters [CppParam { name: "", ty: "LingerOption", modifiers: " const&", def_value: None }]
constexpr LingerOption(LingerOption const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LingerOption", modifiers: "&&", def_value: None }]
constexpr LingerOption(LingerOption&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LingerOption(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr LingerOption& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LingerOption& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LingerOption& operator=(LingerOption&& o) noexcept = default;
  constexpr LingerOption& operator=(LingerOption const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_enabled, put=__set_enabled))  enabled;

constexpr void __set_enabled(bool value) ;

constexpr bool __get_enabled() const;

 int32_t __declspec(property(get=__get_lingerTime, put=__set_lingerTime))  lingerTime;

constexpr void __set_lingerTime(int32_t value) ;

constexpr int32_t __get_lingerTime() const;


// Properties

 bool __declspec(property(put=set_Enabled))  Enabled;

 int32_t __declspec(property(put=set_LingerTime))  LingerTime;


// Methods

// Ctor Parameters [CppParam { name: "enable", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "seconds", ty: "int32_t", modifiers: "", def_value: None }]
explicit LingerOption(bool enable, int32_t seconds) ;

/// @brief Method .ctor addr 0x2769cc4 size 0x34 virtual false final false
 void _ctor(bool enable, int32_t seconds) ;

/// @brief Method set_Enabled addr 0x2769cf8 size 0xc virtual false final false
 void set_Enabled(bool value) ;

/// @brief Method set_LingerTime addr 0x2769d04 size 0x8 virtual false final false
 void set_LingerTime(int32_t value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::Sockets
NEED_NO_BOX(System::Net::Sockets::LingerOption);
DEFINE_IL2CPP_ARG_TYPE(System::Net::Sockets::LingerOption, "System.Net.Sockets", "LingerOption");
