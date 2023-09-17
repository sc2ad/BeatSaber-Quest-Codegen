#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace System::Xml {
class IncrementalReadDecoder;
}
// Type: System.Xml::IncrementalReadDecoder
namespace System::Xml {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11374))
// CS Name: System.Xml.IncrementalReadDecoder
class CORDL_TYPE IncrementalReadDecoder : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~IncrementalReadDecoder() = default;

// Ctor Parameters [CppParam { name: "", ty: "IncrementalReadDecoder", modifiers: " const&", def_value: None }]
constexpr IncrementalReadDecoder(IncrementalReadDecoder const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "IncrementalReadDecoder", modifiers: "&&", def_value: None }]
constexpr IncrementalReadDecoder(IncrementalReadDecoder&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IncrementalReadDecoder(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr IncrementalReadDecoder& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr IncrementalReadDecoder& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr IncrementalReadDecoder& operator=(IncrementalReadDecoder&& o) noexcept = default;
  constexpr IncrementalReadDecoder& operator=(IncrementalReadDecoder const& o) noexcept = default;
                


// Properties

 bool __declspec(property(get=get_IsFull))  IsFull;


// Methods

/// @brief Method get_IsFull addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_IsFull() ;

/// @brief Method Decode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t Decode(::ArrayW<char16_t> chars, int32_t startPos, int32_t len) ;

// Ctor Parameters []
explicit IncrementalReadDecoder() ;

/// @brief Method .ctor addr 0x26c1150 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml
} // end anonymous namespace
NEED_NO_BOX(::System::Xml::IncrementalReadDecoder);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::IncrementalReadDecoder, "System.Xml", "IncrementalReadDecoder");
