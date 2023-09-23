#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/IO/zzzz__MemoryStream_def.hpp"
namespace System {
class Uri;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace System::Xml {
class XmlCachedStream;
}
// Type: System.Xml::XmlCachedStream
namespace System::Xml {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11496))
// CS Name: System.Xml.XmlCachedStream
class CORDL_TYPE XmlCachedStream : public System::IO::MemoryStream {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x58};

virtual ~XmlCachedStream() = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlCachedStream", modifiers: " const&", def_value: None }]
constexpr XmlCachedStream(XmlCachedStream const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlCachedStream", modifiers: "&&", def_value: None }]
constexpr XmlCachedStream(XmlCachedStream&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XmlCachedStream(void* ptr) noexcept : System::IO::MemoryStream(ptr) {
}


  constexpr XmlCachedStream& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XmlCachedStream& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XmlCachedStream& operator=(XmlCachedStream&& o) noexcept = default;
  constexpr XmlCachedStream& operator=(XmlCachedStream const& o) noexcept = default;
                


// Fields

 System::Uri __declspec(property(get=__get_uri, put=__set_uri))  uri;

constexpr void __set_uri(System::Uri value) ;

constexpr System::Uri __get_uri() const;


// Methods

// Ctor Parameters [CppParam { name: "uri", ty: "System::Uri", modifiers: "", def_value: None }, CppParam { name: "stream", ty: "System::IO::Stream", modifiers: "", def_value: None }]
explicit XmlCachedStream(System::Uri uri, System::IO::Stream stream) ;

/// @brief Method .ctor addr 0x2710964 size 0x174 virtual false final false
 void _ctor(System::Uri uri, System::IO::Stream stream) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml
NEED_NO_BOX(System::Xml::XmlCachedStream);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::XmlCachedStream, "System.Xml", "XmlCachedStream");
