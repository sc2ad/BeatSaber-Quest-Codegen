#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpObject_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Bcpg {
class BcpgInputStream;
}
namespace System::Collections {
class IList;
}
namespace System::Collections {
class IEnumerable;
}
namespace Org::BouncyCastle::Bcpg {
class InputStreamPacket;
}
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpEncryptedData;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpEncryptedDataList;
}
// Type: Org.BouncyCastle.Bcpg.OpenPgp::PgpEncryptedDataList
namespace Org::BouncyCastle::Bcpg::OpenPgp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1628))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1643))
// CS Name: Org.BouncyCastle.Bcpg.OpenPgp.PgpEncryptedDataList
class CORDL_TYPE PgpEncryptedDataList : public Org::BouncyCastle::Bcpg::OpenPgp::PgpObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~PgpEncryptedDataList() = default;

// Ctor Parameters [CppParam { name: "", ty: "PgpEncryptedDataList", modifiers: " const&", def_value: None }]
constexpr PgpEncryptedDataList(PgpEncryptedDataList const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PgpEncryptedDataList", modifiers: "&&", def_value: None }]
constexpr PgpEncryptedDataList(PgpEncryptedDataList&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PgpEncryptedDataList(void* ptr) noexcept : Org::BouncyCastle::Bcpg::OpenPgp::PgpObject(ptr) {
}


  constexpr PgpEncryptedDataList& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PgpEncryptedDataList& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PgpEncryptedDataList& operator=(PgpEncryptedDataList&& o) noexcept = default;
  constexpr PgpEncryptedDataList& operator=(PgpEncryptedDataList const& o) noexcept = default;
                


// Fields

 System::Collections::IList __declspec(property(get=__get_list, put=__set_list))  list;

constexpr void __set_list(System::Collections::IList value) ;

constexpr System::Collections::IList __get_list() const;

 Org::BouncyCastle::Bcpg::InputStreamPacket __declspec(property(get=__get_data, put=__set_data))  data;

constexpr void __set_data(Org::BouncyCastle::Bcpg::InputStreamPacket value) ;

constexpr Org::BouncyCastle::Bcpg::InputStreamPacket __get_data() const;


// Properties

 Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedData __declspec(property(get=get_Item))  Item;

 int32_t __declspec(property(get=get_Size))  Size;

 int32_t __declspec(property(get=get_Count))  Count;

 bool __declspec(property(get=get_IsEmpty))  IsEmpty;


// Methods

// Ctor Parameters [CppParam { name: "bcpgInput", ty: "Org::BouncyCastle::Bcpg::BcpgInputStream", modifiers: "", def_value: None }]
explicit PgpEncryptedDataList(Org::BouncyCastle::Bcpg::BcpgInputStream bcpgInput) ;

/// @brief Method .ctor addr 0x1020cb8 size 0x55c virtual false final false
 void _ctor(Org::BouncyCastle::Bcpg::BcpgInputStream bcpgInput) ;

/// @brief Method get_Item addr 0x1021244 size 0xf4 virtual false final false
 Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedData get_Item(int32_t index) ;

/// @brief Method Get addr 0x1021338 size 0x4 virtual false final false
 ::bs_hook::Il2CppWrapperType Get(int32_t index) ;

/// @brief Method get_Size addr 0x102133c size 0xa4 virtual false final false
 int32_t get_Size() ;

/// @brief Method get_Count addr 0x10213e0 size 0xa4 virtual false final false
 int32_t get_Count() ;

/// @brief Method get_IsEmpty addr 0x1021484 size 0xb0 virtual false final false
 bool get_IsEmpty() ;

/// @brief Method GetEncryptedDataObjects addr 0x1021534 size 0x68 virtual false final false
 System::Collections::IEnumerable GetEncryptedDataObjects() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Bcpg::OpenPgp
NEED_NO_BOX(Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataList);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataList, "Org.BouncyCastle.Bcpg.OpenPgp", "PgpEncryptedDataList");
