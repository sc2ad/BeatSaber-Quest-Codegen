#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "Newtonsoft/Json/zzzz__JsonConverter_def.hpp"
#include "System/Collections/ObjectModel/zzzz__Collection_1_def.hpp"
// Forward declare root types
namespace Newtonsoft::Json {
class JsonConverterCollection;
}
// Type: Newtonsoft.Json::JsonConverterCollection
namespace Newtonsoft::Json {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3799)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3799), inst: 991 }), TypeDefinitionIndex(TypeDefinitionIndex(11772))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11773))
// CS Name: Newtonsoft.Json.JsonConverterCollection
class CORDL_TYPE JsonConverterCollection : public System::Collections::ObjectModel::Collection_1<Newtonsoft::Json::JsonConverter> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~JsonConverterCollection() = default;

// Ctor Parameters [CppParam { name: "", ty: "JsonConverterCollection", modifiers: " const&", def_value: None }]
constexpr JsonConverterCollection(JsonConverterCollection const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "JsonConverterCollection", modifiers: "&&", def_value: None }]
constexpr JsonConverterCollection(JsonConverterCollection&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit JsonConverterCollection(void* ptr) noexcept : System::Collections::ObjectModel::Collection_1<Newtonsoft::Json::JsonConverter>(ptr) {
}


  constexpr JsonConverterCollection& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr JsonConverterCollection& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr JsonConverterCollection& operator=(JsonConverterCollection&& o) noexcept = default;
  constexpr JsonConverterCollection& operator=(JsonConverterCollection const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit JsonConverterCollection() ;

/// @brief Method .ctor addr 0x24d34f4 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json
NEED_NO_BOX(Newtonsoft::Json::JsonConverterCollection);
DEFINE_IL2CPP_ARG_TYPE(Newtonsoft::Json::JsonConverterCollection, "Newtonsoft.Json", "JsonConverterCollection");
