#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System {
class Type;
}
// Forward declare root types
namespace System::Reflection {
class LocalVariableInfo;
}
// Type: System.Reflection::LocalVariableInfo
namespace System::Reflection {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3508))
// CS Name: System.Reflection.LocalVariableInfo
class CORDL_TYPE LocalVariableInfo : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~LocalVariableInfo() = default;

// Ctor Parameters [CppParam { name: "", ty: "LocalVariableInfo", modifiers: " const&", def_value: None }]
constexpr LocalVariableInfo(LocalVariableInfo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LocalVariableInfo", modifiers: "&&", def_value: None }]
constexpr LocalVariableInfo(LocalVariableInfo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LocalVariableInfo(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr LocalVariableInfo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LocalVariableInfo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LocalVariableInfo& operator=(LocalVariableInfo&& o) noexcept = default;
  constexpr LocalVariableInfo& operator=(LocalVariableInfo const& o) noexcept = default;
                


// Fields

 System::Type __declspec(property(get=__get_type, put=__set_type))  type;

constexpr void __set_type(System::Type value) ;

constexpr System::Type __get_type() const;

 bool __declspec(property(get=__get_is_pinned, put=__set_is_pinned))  is_pinned;

constexpr void __set_is_pinned(bool value) ;

constexpr bool __get_is_pinned() const;

 uint16_t __declspec(property(get=__get_position, put=__set_position))  position;

constexpr void __set_position(uint16_t value) ;

constexpr uint16_t __get_position() const;


// Methods

static System::Reflection::LocalVariableInfo New_ctor() ;

/// @brief Method .ctor addr 0x2384ad0 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method ToString addr 0x2384ad8 size 0xac virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Reflection
NEED_NO_BOX(System::Reflection::LocalVariableInfo);
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::LocalVariableInfo, "System.Reflection", "LocalVariableInfo");
