#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace System {
class Type;
}
namespace System {
class Uri;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
// Forward declare root types
namespace System::Xml {
class XmlResolver;
}
// Type: System.Xml::XmlResolver
namespace System::Xml {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11516))
// CS Name: System.Xml.XmlResolver
class CORDL_TYPE XmlResolver : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~XmlResolver() = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlResolver", modifiers: " const&", def_value: None }]
constexpr XmlResolver(XmlResolver const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlResolver", modifiers: "&&", def_value: None }]
constexpr XmlResolver(XmlResolver&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XmlResolver(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr XmlResolver& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XmlResolver& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XmlResolver& operator=(XmlResolver&& o) noexcept = default;
  constexpr XmlResolver& operator=(XmlResolver const& o) noexcept = default;
                


// Methods

/// @brief Method GetEntity addr 0x0 size 0xffffffffffffffff virtual true final false
 ::bs_hook::Il2CppWrapperType GetEntity(::System::Uri absoluteUri, ::StringW role, ::System::Type ofObjectToReturn) ;

/// @brief Method ResolveUri addr 0x2715960 size 0x1d8 virtual true final false
 ::System::Uri ResolveUri(::System::Uri baseUri, ::StringW relativeUri) ;

/// @brief Method SupportsType addr 0x2715b38 size 0x148 virtual true final false
 bool SupportsType(::System::Uri absoluteUri, ::System::Type type) ;

/// @brief Method GetEntityAsync addr 0x2715c80 size 0x40 virtual true final false
 ::System::Threading::Tasks::Task_1<::bs_hook::Il2CppWrapperType> GetEntityAsync(::System::Uri absoluteUri, ::StringW role, ::System::Type ofObjectToReturn) ;

// Ctor Parameters []
explicit XmlResolver() ;

/// @brief Method .ctor addr 0x2715cc0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml
} // end anonymous namespace
NEED_NO_BOX(::System::Xml::XmlResolver);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlResolver, "System.Xml", "XmlResolver");
