#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace System::Collections {
class Hashtable;
}
namespace System::Net {
class HeaderInfo;
}
namespace System::Net {
class HeaderParser;
}
// Forward declare root types
namespace System::Net {
class HeaderInfoTable;
}
// Type: System.Net::HeaderInfoTable
namespace System::Net {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7954))
// CS Name: System.Net.HeaderInfoTable
class CORDL_TYPE HeaderInfoTable : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~HeaderInfoTable() = default;

// Ctor Parameters [CppParam { name: "", ty: "HeaderInfoTable", modifiers: " const&", def_value: None }]
constexpr HeaderInfoTable(HeaderInfoTable const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HeaderInfoTable", modifiers: "&&", def_value: None }]
constexpr HeaderInfoTable(HeaderInfoTable&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HeaderInfoTable(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HeaderInfoTable& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HeaderInfoTable& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HeaderInfoTable& operator=(HeaderInfoTable&& o) noexcept = default;
  constexpr HeaderInfoTable& operator=(HeaderInfoTable const& o) noexcept = default;
                


// Fields

static ::System::Collections::Hashtable __declspec(property(get=__get_HeaderHashTable, put=__set_HeaderHashTable))  HeaderHashTable;

static void __set_HeaderHashTable(::System::Collections::Hashtable value) ;

static ::System::Collections::Hashtable __get_HeaderHashTable() ;

static ::System::Net::HeaderInfo __declspec(property(get=__get_UnknownHeaderInfo, put=__set_UnknownHeaderInfo))  UnknownHeaderInfo;

static void __set_UnknownHeaderInfo(::System::Net::HeaderInfo value) ;

static ::System::Net::HeaderInfo __get_UnknownHeaderInfo() ;

static ::System::Net::HeaderParser __declspec(property(get=__get_SingleParser, put=__set_SingleParser))  SingleParser;

static void __set_SingleParser(::System::Net::HeaderParser value) ;

static ::System::Net::HeaderParser __get_SingleParser() ;

static ::System::Net::HeaderParser __declspec(property(get=__get_MultiParser, put=__set_MultiParser))  MultiParser;

static void __set_MultiParser(::System::Net::HeaderParser value) ;

static ::System::Net::HeaderParser __get_MultiParser() ;


// Properties

 ::System::Net::HeaderInfo __declspec(property(get=get_Item))  Item;


// Methods

/// @brief Method ParseSingleValue addr 0x2814890 size 0x90 virtual false final false
static ::ArrayW<::StringW> ParseSingleValue(::StringW value) ;

/// @brief Method ParseMultiValue addr 0x2814920 size 0x1f8 virtual false final false
static ::ArrayW<::StringW> ParseMultiValue(::StringW value) ;

/// @brief Method get_Item addr 0x280e8bc size 0xdc virtual false final false
 ::System::Net::HeaderInfo get_Item(::StringW name) ;

// Ctor Parameters []
explicit HeaderInfoTable() ;

/// @brief Method .ctor addr 0x281101c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net
} // end anonymous namespace
NEED_NO_BOX(::System::Net::HeaderInfoTable);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::HeaderInfoTable, "System.Net", "HeaderInfoTable");
