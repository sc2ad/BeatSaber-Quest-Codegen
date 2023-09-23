#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JContainer_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace Newtonsoft::Json {
class JsonWriter;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Newtonsoft::Json {
class JsonReader;
}
namespace Newtonsoft::Json::Linq {
struct JTokenType;
}
namespace Newtonsoft::Json::Linq {
class JsonLoadSettings;
}
namespace Newtonsoft::Json::Linq {
class JToken;
}
namespace Newtonsoft::Json::Linq {
class JsonMergeSettings;
}
namespace Newtonsoft::Json {
class JsonConverter;
}
// Forward declare root types
namespace Newtonsoft::Json::Linq {
class JConstructor;
}
// Type: Newtonsoft.Json.Linq::JConstructor
namespace Newtonsoft::Json::Linq {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11930))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11928))
// CS Name: Newtonsoft.Json.Linq.JConstructor
class CORDL_TYPE JConstructor : public Newtonsoft::Json::Linq::JContainer {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~JConstructor() = default;

// Ctor Parameters [CppParam { name: "", ty: "JConstructor", modifiers: " const&", def_value: None }]
constexpr JConstructor(JConstructor const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "JConstructor", modifiers: "&&", def_value: None }]
constexpr JConstructor(JConstructor&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit JConstructor(void* ptr) noexcept : Newtonsoft::Json::Linq::JContainer(ptr) {
}


  constexpr JConstructor& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr JConstructor& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr JConstructor& operator=(JConstructor&& o) noexcept = default;
  constexpr JConstructor& operator=(JConstructor const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__name, put=__set__name))  _name;

constexpr void __set__name(::StringW value) ;

constexpr ::StringW __get__name() const;

 System::Collections::Generic::List_1<Newtonsoft::Json::Linq::JToken> __declspec(property(get=__get__values, put=__set__values))  _values;

constexpr void __set__values(System::Collections::Generic::List_1<Newtonsoft::Json::Linq::JToken> value) ;

constexpr System::Collections::Generic::List_1<Newtonsoft::Json::Linq::JToken> __get__values() const;


// Properties

 System::Collections::Generic::IList_1<Newtonsoft::Json::Linq::JToken> __declspec(property(get=get_ChildrenTokens))  ChildrenTokens;

 ::StringW __declspec(property(get=get_Name, put=set_Name))  Name;

 Newtonsoft::Json::Linq::JTokenType __declspec(property(get=get_Type))  Type;

 Newtonsoft::Json::Linq::JToken __declspec(property(get=get_Item, put=set_Item))  Item;


// Methods

/// @brief Method get_ChildrenTokens addr 0x2519770 size 0x8 virtual true final false
 System::Collections::Generic::IList_1<Newtonsoft::Json::Linq::JToken> get_ChildrenTokens() ;

/// @brief Method IndexOfItem addr 0x2519778 size 0x58 virtual true final false
 int32_t IndexOfItem(Newtonsoft::Json::Linq::JToken item) ;

/// @brief Method MergeItem addr 0x25197d0 size 0xb0 virtual true final false
 void MergeItem(::bs_hook::Il2CppWrapperType content, Newtonsoft::Json::Linq::JsonMergeSettings settings) ;

/// @brief Method get_Name addr 0x251a658 size 0x8 virtual false final false
 ::StringW get_Name() ;

/// @brief Method set_Name addr 0x251a660 size 0x8 virtual false final false
 void set_Name(::StringW value) ;

/// @brief Method get_Type addr 0x251a668 size 0x8 virtual true final false
 Newtonsoft::Json::Linq::JTokenType get_Type() ;

// Ctor Parameters []
explicit JConstructor() ;

/// @brief Method .ctor addr 0x251a670 size 0x78 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "other", ty: "Newtonsoft::Json::Linq::JConstructor", modifiers: "", def_value: None }]
explicit JConstructor(Newtonsoft::Json::Linq::JConstructor other) ;

/// @brief Method .ctor addr 0x251a740 size 0x98 virtual false final false
 void _ctor(Newtonsoft::Json::Linq::JConstructor other) ;

// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "content", ty: "::ArrayW<::bs_hook::Il2CppWrapperType>", modifiers: "", def_value: None }]
explicit JConstructor(::StringW name, ::ArrayW<::bs_hook::Il2CppWrapperType> content) ;

/// @brief Method .ctor addr 0x251aaf0 size 0x34 virtual false final false
 void _ctor(::StringW name, ::ArrayW<::bs_hook::Il2CppWrapperType> content) ;

// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "content", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }]
explicit JConstructor(::StringW name, ::bs_hook::Il2CppWrapperType content) ;

/// @brief Method .ctor addr 0x251ab24 size 0x34 virtual false final false
 void _ctor(::StringW name, ::bs_hook::Il2CppWrapperType content) ;

// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }]
explicit JConstructor(::StringW name) ;

/// @brief Method .ctor addr 0x251ab58 size 0x130 virtual false final false
 void _ctor(::StringW name) ;

/// @brief Method DeepEquals addr 0x251ac88 size 0xac virtual true final false
 bool DeepEquals(Newtonsoft::Json::Linq::JToken node) ;

/// @brief Method CloneToken addr 0x251afec size 0x60 virtual true final false
 Newtonsoft::Json::Linq::JToken CloneToken() ;

/// @brief Method WriteTo addr 0x251b04c size 0x2ec virtual true final false
 void WriteTo(Newtonsoft::Json::JsonWriter writer, ::ArrayW<Newtonsoft::Json::JsonConverter> converters) ;

/// @brief Method get_Item addr 0x251b338 size 0x12c virtual true final false
 Newtonsoft::Json::Linq::JToken get_Item(::bs_hook::Il2CppWrapperType key) ;

/// @brief Method set_Item addr 0x251b464 size 0x134 virtual true final false
 void set_Item(::bs_hook::Il2CppWrapperType key, Newtonsoft::Json::Linq::JToken value) ;

/// @brief Method GetDeepHashCode addr 0x251b598 size 0x40 virtual true final false
 int32_t GetDeepHashCode() ;

/// @brief Method Load addr 0x251b8dc size 0x8 virtual false final false
static Newtonsoft::Json::Linq::JConstructor Load(Newtonsoft::Json::JsonReader reader) ;

/// @brief Method Load addr 0x251b8e4 size 0x1f8 virtual false final false
static Newtonsoft::Json::Linq::JConstructor Load(Newtonsoft::Json::JsonReader reader, Newtonsoft::Json::Linq::JsonLoadSettings settings) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Linq
NEED_NO_BOX(Newtonsoft::Json::Linq::JConstructor);
DEFINE_IL2CPP_ARG_TYPE(Newtonsoft::Json::Linq::JConstructor, "Newtonsoft.Json.Linq", "JConstructor");
