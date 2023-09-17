#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace System::Xml {
struct XmlNodeType;
}
namespace System::Xml::Linq {
class XElement;
}
namespace System::Xml::Linq {
struct SaveOptions;
}
namespace System::Xml::Linq {
class XObjectChangeEventArgs;
}
namespace System {
class Type;
}
namespace System::Xml::Linq {
class XContainer;
}
// Forward declare root types
namespace System::Xml::Linq {
class XObject;
}
// Type: System.Xml.Linq::XObject
namespace System::Xml::Linq {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15430))
// CS Name: System.Xml.Linq.XObject
class CORDL_TYPE XObject : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~XObject() = default;

// Ctor Parameters [CppParam { name: "", ty: "XObject", modifiers: " const&", def_value: None }]
constexpr XObject(XObject const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XObject", modifiers: "&&", def_value: None }]
constexpr XObject(XObject&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XObject(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr XObject& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XObject& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XObject& operator=(XObject&& o) noexcept = default;
  constexpr XObject& operator=(XObject const& o) noexcept = default;
                


// Fields

 ::System::Xml::Linq::XContainer __declspec(property(get=__get_parent, put=__set_parent))  parent;

constexpr void __set_parent(::System::Xml::Linq::XContainer value) ;

constexpr ::System::Xml::Linq::XContainer __get_parent() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_annotations, put=__set_annotations))  annotations;

constexpr void __set_annotations(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_annotations() const;


// Properties

 ::System::Xml::XmlNodeType __declspec(property(get=get_NodeType))  NodeType;

 ::System::Xml::Linq::XElement __declspec(property(get=get_Parent))  Parent;


// Methods

// Ctor Parameters []
explicit XObject() ;

/// @brief Method .ctor addr 0x26c8140 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method get_NodeType addr 0x0 size 0xffffffffffffffff virtual true final false
 ::System::Xml::XmlNodeType get_NodeType() ;

/// @brief Method get_Parent addr 0x26ce850 size 0x7c virtual false final false
 ::System::Xml::Linq::XElement get_Parent() ;

/// @brief Method AnnotationForSealedType addr 0x26ce8cc size 0x144 virtual false final false
 ::bs_hook::Il2CppWrapperType AnnotationForSealedType(::System::Type type) ;

/// @brief Method Annotation addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 T Annotation() ;

/// @brief Method NotifyChanged addr 0x26c8a78 size 0xa8 virtual false final false
 bool NotifyChanged(::bs_hook::Il2CppWrapperType sender, ::System::Xml::Linq::XObjectChangeEventArgs e) ;

/// @brief Method NotifyChanging addr 0x26c89d0 size 0xa8 virtual false final false
 bool NotifyChanging(::bs_hook::Il2CppWrapperType sender, ::System::Xml::Linq::XObjectChangeEventArgs e) ;

/// @brief Method SkipNotify addr 0x26c9f2c size 0x70 virtual false final false
 bool SkipNotify() ;

/// @brief Method GetSaveOptionsFromAnnotations addr 0x26ce2fc size 0xe0 virtual false final false
 ::System::Xml::Linq::SaveOptions GetSaveOptionsFromAnnotations() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml::Linq
} // end anonymous namespace
NEED_NO_BOX(::System::Xml::Linq::XObject);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Linq::XObject, "System.Xml.Linq", "XObject");
