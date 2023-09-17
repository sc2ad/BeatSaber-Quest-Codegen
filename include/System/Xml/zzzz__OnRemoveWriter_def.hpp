#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
namespace System::Xml {
class XmlRawWriter;
}
// Forward declare root types
namespace System::Xml {
class OnRemoveWriter;
}
// Type: System.Xml::OnRemoveWriter
namespace System::Xml {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11372))
// CS Name: System.Xml.OnRemoveWriter
class CORDL_TYPE OnRemoveWriter : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OnRemoveWriter() = default;

// Ctor Parameters [CppParam { name: "", ty: "OnRemoveWriter", modifiers: " const&", def_value: None }]
constexpr OnRemoveWriter(OnRemoveWriter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OnRemoveWriter", modifiers: "&&", def_value: None }]
constexpr OnRemoveWriter(OnRemoveWriter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OnRemoveWriter(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr OnRemoveWriter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OnRemoveWriter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OnRemoveWriter& operator=(OnRemoveWriter&& o) noexcept = default;
  constexpr OnRemoveWriter& operator=(OnRemoveWriter const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit OnRemoveWriter(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x26c1010 size 0x12c virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x26c113c size 0x14 virtual true final false
 void Invoke(::System::Xml::XmlRawWriter writer) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml
} // end anonymous namespace
NEED_NO_BOX(::System::Xml::OnRemoveWriter);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::OnRemoveWriter, "System.Xml", "OnRemoveWriter");
