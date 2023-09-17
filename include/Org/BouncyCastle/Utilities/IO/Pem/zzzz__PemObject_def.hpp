#pragma once
#include "../../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Utilities::IO::Pem {
class PemObjectGenerator;
}
namespace System::Collections {
class IList;
}
// Forward declare root types
namespace Org::BouncyCastle::Utilities::IO::Pem {
class PemObject;
}
// Type: Org.BouncyCastle.Utilities.IO.Pem::PemObject
namespace Org::BouncyCastle::Utilities::IO::Pem {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1806))
// CS Name: Org.BouncyCastle.Utilities.IO.Pem.PemObject
class CORDL_TYPE PemObject : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::Org::BouncyCastle::Utilities::IO::Pem::PemObjectGenerator
constexpr operator  ::Org::BouncyCastle::Utilities::IO::Pem::PemObjectGenerator() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~PemObject() = default;

// Ctor Parameters [CppParam { name: "", ty: "PemObject", modifiers: " const&", def_value: None }]
constexpr PemObject(PemObject const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PemObject", modifiers: "&&", def_value: None }]
constexpr PemObject(PemObject&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PemObject(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr PemObject& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PemObject& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PemObject& operator=(PemObject&& o) noexcept = default;
  constexpr PemObject& operator=(PemObject const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_type, put=__set_type))  type;

constexpr void __set_type(::StringW value) ;

constexpr ::StringW __get_type() const;

 ::System::Collections::IList __declspec(property(get=__get_headers, put=__set_headers))  headers;

constexpr void __set_headers(::System::Collections::IList value) ;

constexpr ::System::Collections::IList __get_headers() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_content, put=__set_content))  content;

constexpr void __set_content(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_content() const;


// Properties

 ::StringW __declspec(property(get=get_Type))  Type;

 ::System::Collections::IList __declspec(property(get=get_Headers))  Headers;

 ::ArrayW<uint8_t> __declspec(property(get=get_Content))  Content;


// Methods

// Ctor Parameters [CppParam { name: "type", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "content", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit PemObject(::StringW type, ::ArrayW<uint8_t> content) ;

/// @brief Method .ctor addr 0x10d38b0 size 0x78 virtual false final false
 void _ctor(::StringW type, ::ArrayW<uint8_t> content) ;

// Ctor Parameters [CppParam { name: "type", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "headers", ty: "::System::Collections::IList", modifiers: "", def_value: None }, CppParam { name: "content", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit PemObject(::StringW type, ::System::Collections::IList headers, ::ArrayW<uint8_t> content) ;

/// @brief Method .ctor addr 0x10d3928 size 0x8c virtual false final false
 void _ctor(::StringW type, ::System::Collections::IList headers, ::ArrayW<uint8_t> content) ;

/// @brief Method get_Type addr 0x10d39b4 size 0x8 virtual false final false
 ::StringW get_Type() ;

/// @brief Method get_Headers addr 0x10d39bc size 0x8 virtual false final false
 ::System::Collections::IList get_Headers() ;

/// @brief Method get_Content addr 0x10d39c4 size 0x8 virtual false final false
 ::ArrayW<uint8_t> get_Content() ;

/// @brief Method Generate addr 0x10d39cc size 0x4 virtual true final true
 ::Org::BouncyCastle::Utilities::IO::Pem::PemObject Generate() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Utilities::IO::Pem
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Utilities::IO::Pem::PemObject);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Utilities::IO::Pem::PemObject, "Org.BouncyCastle.Utilities.IO.Pem", "PemObject");
