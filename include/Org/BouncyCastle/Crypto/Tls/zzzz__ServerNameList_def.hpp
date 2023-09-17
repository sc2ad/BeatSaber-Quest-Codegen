#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace System::Collections {
class IList;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class ServerNameList;
}
// Type: Org.BouncyCastle.Crypto.Tls::ServerNameList
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1268))
// CS Name: Org.BouncyCastle.Crypto.Tls.ServerNameList
class CORDL_TYPE ServerNameList : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~ServerNameList() = default;

// Ctor Parameters [CppParam { name: "", ty: "ServerNameList", modifiers: " const&", def_value: None }]
constexpr ServerNameList(ServerNameList const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ServerNameList", modifiers: "&&", def_value: None }]
constexpr ServerNameList(ServerNameList&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ServerNameList(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ServerNameList& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ServerNameList& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ServerNameList& operator=(ServerNameList&& o) noexcept = default;
  constexpr ServerNameList& operator=(ServerNameList const& o) noexcept = default;
                


// Fields

 ::System::Collections::IList __declspec(property(get=__get_mServerNameList, put=__set_mServerNameList))  mServerNameList;

constexpr void __set_mServerNameList(::System::Collections::IList value) ;

constexpr ::System::Collections::IList __get_mServerNameList() const;


// Properties

 ::System::Collections::IList __declspec(property(get=get_ServerNames))  ServerNames;


// Methods

// Ctor Parameters [CppParam { name: "serverNameList", ty: "::System::Collections::IList", modifiers: "", def_value: None }]
explicit ServerNameList(::System::Collections::IList serverNameList) ;

/// @brief Method .ctor addr 0xf0809c size 0x78 virtual false final false
 void _ctor(::System::Collections::IList serverNameList) ;

/// @brief Method get_ServerNames addr 0xf08114 size 0x8 virtual true final false
 ::System::Collections::IList get_ServerNames() ;

/// @brief Method Encode addr 0xf0811c size 0x4bc virtual true final false
 void Encode(::System::IO::Stream output) ;

/// @brief Method Parse addr 0xf08674 size 0x29c virtual false final false
static ::Org::BouncyCastle::Crypto::Tls::ServerNameList Parse(::System::IO::Stream input) ;

/// @brief Method CheckNameType addr 0xf085d8 size 0x9c virtual false final false
static ::ArrayW<uint8_t> CheckNameType(::ArrayW<uint8_t> nameTypesSeen, uint8_t nameType) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::ServerNameList);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::ServerNameList, "Org.BouncyCastle.Crypto.Tls", "ServerNameList");
