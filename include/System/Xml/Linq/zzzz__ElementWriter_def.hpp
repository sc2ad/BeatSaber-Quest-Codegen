#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
namespace System::Xml::Linq {
class XNamespace;
}
namespace System::Xml {
class XmlWriter;
}
namespace System::Xml::Linq {
struct NamespaceResolver;
}
namespace System::Xml::Linq {
class XElement;
}
// Forward declare root types
namespace System::Xml::Linq {
struct ElementWriter;
}
// Type: System.Xml.Linq::ElementWriter
namespace System::Xml::Linq {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15422))
// CS Name: System.Xml.Linq.ElementWriter
struct CORDL_TYPE ElementWriter : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "_writer", ty: "System::Xml::XmlWriter", modifiers: "", def_value: None }, CppParam { name: "_resolver", ty: "System::Xml::Linq::NamespaceResolver", modifiers: "", def_value: None }]
constexpr ElementWriter(System::Xml::XmlWriter _writer, System::Xml::Linq::NamespaceResolver _resolver) noexcept;


                    constexpr ElementWriter(ElementWriter const&) = default;
                    constexpr ElementWriter(ElementWriter&&) = default;
                    constexpr ElementWriter& operator=(ElementWriter const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ElementWriter& operator=(ElementWriter&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x20};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ElementWriter(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 System::Xml::XmlWriter __declspec(property(get=__get__writer, put=__set__writer))  _writer;

constexpr void __set__writer(System::Xml::XmlWriter value) ;

constexpr System::Xml::XmlWriter __get__writer() const;

 System::Xml::Linq::NamespaceResolver __declspec(property(get=__get__resolver, put=__set__resolver))  _resolver;

constexpr void __set__resolver(System::Xml::Linq::NamespaceResolver value) ;

constexpr System::Xml::Linq::NamespaceResolver __get__resolver() const;


// Methods

/// @brief Method .ctor addr 0x26cc6c8 size 0xc virtual false final false
 void _ctor(System::Xml::XmlWriter writer) ;

/// @brief Method WriteElement addr 0x26cc6d4 size 0x1a8 virtual false final false
 void WriteElement(System::Xml::Linq::XElement e) ;

/// @brief Method GetPrefixOfNamespace addr 0x26cd20c size 0xfc virtual false final false
 ::StringW GetPrefixOfNamespace(System::Xml::Linq::XNamespace ns, bool allowDefaultNamespace) ;

/// @brief Method PushAncestors addr 0x26ccf2c size 0x128 virtual false final false
 void PushAncestors(System::Xml::Linq::XElement e) ;

/// @brief Method PushElement addr 0x26cd4e0 size 0xd4 virtual false final false
 void PushElement(System::Xml::Linq::XElement e) ;

/// @brief Method WriteEndElement addr 0x26cd1b4 size 0x2c virtual false final false
 void WriteEndElement() ;

/// @brief Method WriteFullEndElement addr 0x26cd1e0 size 0x2c virtual false final false
 void WriteFullEndElement() ;

/// @brief Method WriteStartElement addr 0x26cd054 size 0x160 virtual false final false
 void WriteStartElement(System::Xml::Linq::XElement e) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Xml::Linq
DEFINE_IL2CPP_ARG_TYPE(System::Xml::Linq::ElementWriter, "System.Xml.Linq", "ElementWriter");
