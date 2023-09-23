#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System::Xml::Linq {
class XObjectChangeEventArgs;
}
namespace System {
template<typename TEventArgs>
class EventHandler_1;
}
// Forward declare root types
namespace System::Xml::Linq {
class XObjectChangeAnnotation;
}
// Type: System.Xml.Linq::XObjectChangeAnnotation
namespace System::Xml::Linq {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15431))
// CS Name: System.Xml.Linq.XObjectChangeAnnotation
class CORDL_TYPE XObjectChangeAnnotation : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~XObjectChangeAnnotation() = default;

// Ctor Parameters [CppParam { name: "", ty: "XObjectChangeAnnotation", modifiers: " const&", def_value: None }]
constexpr XObjectChangeAnnotation(XObjectChangeAnnotation const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XObjectChangeAnnotation", modifiers: "&&", def_value: None }]
constexpr XObjectChangeAnnotation(XObjectChangeAnnotation&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XObjectChangeAnnotation(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr XObjectChangeAnnotation& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XObjectChangeAnnotation& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XObjectChangeAnnotation& operator=(XObjectChangeAnnotation&& o) noexcept = default;
  constexpr XObjectChangeAnnotation& operator=(XObjectChangeAnnotation const& o) noexcept = default;
                


// Fields

 System::EventHandler_1<System::Xml::Linq::XObjectChangeEventArgs> __declspec(property(get=__get_changing, put=__set_changing))  changing;

constexpr void __set_changing(System::EventHandler_1<System::Xml::Linq::XObjectChangeEventArgs> value) ;

constexpr System::EventHandler_1<System::Xml::Linq::XObjectChangeEventArgs> __get_changing() const;

 System::EventHandler_1<System::Xml::Linq::XObjectChangeEventArgs> __declspec(property(get=__get_changed, put=__set_changed))  changed;

constexpr void __set_changed(System::EventHandler_1<System::Xml::Linq::XObjectChangeEventArgs> value) ;

constexpr System::EventHandler_1<System::Xml::Linq::XObjectChangeEventArgs> __get_changed() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml::Linq
NEED_NO_BOX(System::Xml::Linq::XObjectChangeAnnotation);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::Linq::XObjectChangeAnnotation, "System.Xml.Linq", "XObjectChangeAnnotation");
