#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
// Forward declare root types
namespace System::Xml {
class ByteStack;
}
// Type: System.Xml::ByteStack
namespace System::Xml {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11352))
// CS Name: System.Xml.ByteStack
class CORDL_TYPE ByteStack : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~ByteStack() = default;

// Ctor Parameters [CppParam { name: "", ty: "ByteStack", modifiers: " const&", def_value: None }]
constexpr ByteStack(ByteStack const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ByteStack", modifiers: "&&", def_value: None }]
constexpr ByteStack(ByteStack&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ByteStack(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ByteStack& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ByteStack& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ByteStack& operator=(ByteStack&& o) noexcept = default;
  constexpr ByteStack& operator=(ByteStack const& o) noexcept = default;
                


// Fields

 ::ArrayW<uint8_t> __declspec(property(get=__get_stack, put=__set_stack))  stack;

constexpr void __set_stack(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_stack() const;

 int32_t __declspec(property(get=__get_growthRate, put=__set_growthRate))  growthRate;

constexpr void __set_growthRate(int32_t value) ;

constexpr int32_t __get_growthRate() const;

 int32_t __declspec(property(get=__get_top, put=__set_top))  top;

constexpr void __set_top(int32_t value) ;

constexpr int32_t __get_top() const;

 int32_t __declspec(property(get=__get_size, put=__set_size))  size;

constexpr void __set_size(int32_t value) ;

constexpr int32_t __get_size() const;


// Methods

static System::Xml::ByteStack New_ctor(int32_t growthRate) ;

/// @brief Method .ctor addr 0x26bbed4 size 0x70 virtual false final false
 void _ctor(int32_t growthRate) ;

/// @brief Method Push addr 0x26bbf44 size 0xd0 virtual false final false
 void Push(uint8_t data) ;

/// @brief Method Pop addr 0x26bc014 size 0x4c virtual false final false
 uint8_t Pop() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml
NEED_NO_BOX(System::Xml::ByteStack);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::ByteStack, "System.Xml", "ByteStack");
