#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
// Forward declare root types
namespace System::Xml {
class TernaryTreeReadOnly;
}
// Type: System.Xml::TernaryTreeReadOnly
namespace System::Xml {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11381))
// CS Name: System.Xml.TernaryTreeReadOnly
class CORDL_TYPE TernaryTreeReadOnly : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~TernaryTreeReadOnly() = default;

// Ctor Parameters [CppParam { name: "", ty: "TernaryTreeReadOnly", modifiers: " const&", def_value: None }]
constexpr TernaryTreeReadOnly(TernaryTreeReadOnly const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TernaryTreeReadOnly", modifiers: "&&", def_value: None }]
constexpr TernaryTreeReadOnly(TernaryTreeReadOnly&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TernaryTreeReadOnly(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TernaryTreeReadOnly& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TernaryTreeReadOnly& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TernaryTreeReadOnly& operator=(TernaryTreeReadOnly&& o) noexcept = default;
  constexpr TernaryTreeReadOnly& operator=(TernaryTreeReadOnly const& o) noexcept = default;
                


// Fields

 ::ArrayW<uint8_t> __declspec(property(get=__get_nodeBuffer, put=__set_nodeBuffer))  nodeBuffer;

constexpr void __set_nodeBuffer(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_nodeBuffer() const;


// Methods

// Ctor Parameters [CppParam { name: "nodeBuffer", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit TernaryTreeReadOnly(::ArrayW<uint8_t> nodeBuffer) ;

/// @brief Method .ctor addr 0x26be7c0 size 0x28 virtual false final false
 void _ctor(::ArrayW<uint8_t> nodeBuffer) ;

/// @brief Method FindCaseInsensitiveString addr 0x26bd01c size 0x12c virtual false final false
 uint8_t FindCaseInsensitiveString(::StringW stringToFind) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml
NEED_NO_BOX(System::Xml::TernaryTreeReadOnly);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::TernaryTreeReadOnly, "System.Xml", "TernaryTreeReadOnly");
