#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/Xml/zzzz__IncrementalReadDecoder_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
// Forward declare root types
namespace System::Xml {
class IncrementalReadDummyDecoder;
}
// Type: System.Xml::IncrementalReadDummyDecoder
namespace System::Xml {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11374))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11375))
// CS Name: System.Xml.IncrementalReadDummyDecoder
class CORDL_TYPE IncrementalReadDummyDecoder : public System::Xml::IncrementalReadDecoder {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~IncrementalReadDummyDecoder() = default;

// Ctor Parameters [CppParam { name: "", ty: "IncrementalReadDummyDecoder", modifiers: " const&", def_value: None }]
constexpr IncrementalReadDummyDecoder(IncrementalReadDummyDecoder const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "IncrementalReadDummyDecoder", modifiers: "&&", def_value: None }]
constexpr IncrementalReadDummyDecoder(IncrementalReadDummyDecoder&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IncrementalReadDummyDecoder(void* ptr) noexcept : System::Xml::IncrementalReadDecoder(ptr) {
}


  constexpr IncrementalReadDummyDecoder& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr IncrementalReadDummyDecoder& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr IncrementalReadDummyDecoder& operator=(IncrementalReadDummyDecoder&& o) noexcept = default;
  constexpr IncrementalReadDummyDecoder& operator=(IncrementalReadDummyDecoder const& o) noexcept = default;
                


// Properties

 bool __declspec(property(get=get_IsFull))  IsFull;


// Methods

/// @brief Method get_IsFull addr 0x26c1158 size 0x8 virtual true final false
 bool get_IsFull() ;

/// @brief Method Decode addr 0x26c1160 size 0x8 virtual true final false
 int32_t Decode(::ArrayW<char16_t> chars, int32_t startPos, int32_t len) ;

static System::Xml::IncrementalReadDummyDecoder New_ctor() ;

/// @brief Method .ctor addr 0x26c1168 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml
NEED_NO_BOX(System::Xml::IncrementalReadDummyDecoder);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::IncrementalReadDummyDecoder, "System.Xml", "IncrementalReadDummyDecoder");
