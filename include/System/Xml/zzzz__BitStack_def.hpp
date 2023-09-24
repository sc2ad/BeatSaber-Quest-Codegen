#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
// Forward declare root types
namespace System::Xml {
class BitStack;
}
// Type: System.Xml::BitStack
namespace System::Xml {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11350))
// CS Name: System.Xml.BitStack
class CORDL_TYPE BitStack : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~BitStack() = default;

// Ctor Parameters [CppParam { name: "", ty: "BitStack", modifiers: " const&", def_value: None }]
constexpr BitStack(BitStack const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BitStack", modifiers: "&&", def_value: None }]
constexpr BitStack(BitStack&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BitStack(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BitStack& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BitStack& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BitStack& operator=(BitStack&& o) noexcept = default;
  constexpr BitStack& operator=(BitStack const& o) noexcept = default;
                


// Fields

 ::ArrayW<uint32_t> __declspec(property(get=__get_bitStack, put=__set_bitStack))  bitStack;

constexpr void __set_bitStack(::ArrayW<uint32_t> value) ;

constexpr ::ArrayW<uint32_t> __get_bitStack() const;

 int32_t __declspec(property(get=__get_stackPos, put=__set_stackPos))  stackPos;

constexpr void __set_stackPos(int32_t value) ;

constexpr int32_t __get_stackPos() const;

 uint32_t __declspec(property(get=__get_curr, put=__set_curr))  curr;

constexpr void __set_curr(uint32_t value) ;

constexpr uint32_t __get_curr() const;


// Methods

static System::Xml::BitStack New_ctor() ;

/// @brief Method .ctor addr 0x26bbbdc size 0x20 virtual false final false
 void _ctor() ;

/// @brief Method PushBit addr 0x26bbbfc size 0x38 virtual false final false
 void PushBit(bool bit) ;

/// @brief Method PopBit addr 0x26bbcfc size 0x28 virtual false final false
 bool PopBit() ;

/// @brief Method PeekBit addr 0x26bbd68 size 0xc virtual false final false
 bool PeekBit() ;

/// @brief Method PushCurr addr 0x26bbc34 size 0xc8 virtual false final false
 void PushCurr() ;

/// @brief Method PopCurr addr 0x26bbd24 size 0x44 virtual false final false
 void PopCurr() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml
NEED_NO_BOX(System::Xml::BitStack);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::BitStack, "System.Xml", "BitStack");
