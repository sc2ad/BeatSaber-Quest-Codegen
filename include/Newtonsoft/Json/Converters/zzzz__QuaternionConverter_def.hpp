#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Newtonsoft/Json/zzzz__JsonConverter_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Newtonsoft::Json::Linq {
class JProperty;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace Newtonsoft::Json::Converters {
class Newtonsoft__Json__Converters__QuaternionConverter____c;
}
namespace Newtonsoft::Json {
class JsonWriter;
}
namespace System {
class Type;
}
namespace Newtonsoft::Json {
class JsonSerializer;
}
namespace Newtonsoft::Json {
class JsonReader;
}
// Forward declare root types
namespace Newtonsoft::Json::Converters {
class Newtonsoft__Json__Converters__QuaternionConverter____c;
}
namespace Newtonsoft::Json::Converters {
class QuaternionConverter;
}
// Type: ::<>c
namespace Newtonsoft::Json::Converters {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11980))
// CS Name: Newtonsoft.Json.Converters.QuaternionConverter::<>c
class CORDL_TYPE Newtonsoft__Json__Converters__QuaternionConverter____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Newtonsoft__Json__Converters__QuaternionConverter____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "Newtonsoft__Json__Converters__QuaternionConverter____c", modifiers: " const&", def_value: None }]
constexpr Newtonsoft__Json__Converters__QuaternionConverter____c(Newtonsoft__Json__Converters__QuaternionConverter____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Newtonsoft__Json__Converters__QuaternionConverter____c", modifiers: "&&", def_value: None }]
constexpr Newtonsoft__Json__Converters__QuaternionConverter____c(Newtonsoft__Json__Converters__QuaternionConverter____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Newtonsoft__Json__Converters__QuaternionConverter____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Newtonsoft__Json__Converters__QuaternionConverter____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Newtonsoft__Json__Converters__QuaternionConverter____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Newtonsoft__Json__Converters__QuaternionConverter____c& operator=(Newtonsoft__Json__Converters__QuaternionConverter____c&& o) noexcept = default;
  constexpr Newtonsoft__Json__Converters__QuaternionConverter____c& operator=(Newtonsoft__Json__Converters__QuaternionConverter____c const& o) noexcept = default;
                


// Fields

static Newtonsoft::Json::Converters::Newtonsoft__Json__Converters__QuaternionConverter____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(Newtonsoft::Json::Converters::Newtonsoft__Json__Converters__QuaternionConverter____c value) ;

static Newtonsoft::Json::Converters::Newtonsoft__Json__Converters__QuaternionConverter____c __get___9() ;

static System::Func_2<Newtonsoft::Json::Linq::JProperty,bool> __declspec(property(get=__get___9__2_0, put=__set___9__2_0))  __9__2_0;

static void __set___9__2_0(System::Func_2<Newtonsoft::Json::Linq::JProperty,bool> value) ;

static System::Func_2<Newtonsoft::Json::Linq::JProperty,bool> __get___9__2_0() ;

static System::Func_2<Newtonsoft::Json::Linq::JProperty,bool> __declspec(property(get=__get___9__2_1, put=__set___9__2_1))  __9__2_1;

static void __set___9__2_1(System::Func_2<Newtonsoft::Json::Linq::JProperty,bool> value) ;

static System::Func_2<Newtonsoft::Json::Linq::JProperty,bool> __get___9__2_1() ;

static System::Func_2<Newtonsoft::Json::Linq::JProperty,bool> __declspec(property(get=__get___9__2_2, put=__set___9__2_2))  __9__2_2;

static void __set___9__2_2(System::Func_2<Newtonsoft::Json::Linq::JProperty,bool> value) ;

static System::Func_2<Newtonsoft::Json::Linq::JProperty,bool> __get___9__2_2() ;

static System::Func_2<Newtonsoft::Json::Linq::JProperty,bool> __declspec(property(get=__get___9__2_3, put=__set___9__2_3))  __9__2_3;

static void __set___9__2_3(System::Func_2<Newtonsoft::Json::Linq::JProperty,bool> value) ;

static System::Func_2<Newtonsoft::Json::Linq::JProperty,bool> __get___9__2_3() ;

static System::Func_2<Newtonsoft::Json::Linq::JProperty,bool> __declspec(property(get=__get___9__2_4, put=__set___9__2_4))  __9__2_4;

static void __set___9__2_4(System::Func_2<Newtonsoft::Json::Linq::JProperty,bool> value) ;

static System::Func_2<Newtonsoft::Json::Linq::JProperty,bool> __get___9__2_4() ;


// Methods

static Newtonsoft::Json::Converters::Newtonsoft__Json__Converters__QuaternionConverter____c New_ctor() ;

/// @brief Method .ctor addr 0x253e174 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <ReadJson>b__2_0 addr 0x253e17c size 0x54 virtual false final false
 bool _ReadJson_b__2_0(Newtonsoft::Json::Linq::JProperty p) ;

/// @brief Method <ReadJson>b__2_1 addr 0x253e1d0 size 0x54 virtual false final false
 bool _ReadJson_b__2_1(Newtonsoft::Json::Linq::JProperty p) ;

/// @brief Method <ReadJson>b__2_2 addr 0x253e224 size 0x54 virtual false final false
 bool _ReadJson_b__2_2(Newtonsoft::Json::Linq::JProperty p) ;

/// @brief Method <ReadJson>b__2_3 addr 0x253e278 size 0x54 virtual false final false
 bool _ReadJson_b__2_3(Newtonsoft::Json::Linq::JProperty p) ;

/// @brief Method <ReadJson>b__2_4 addr 0x253e2cc size 0x54 virtual false final false
 bool _ReadJson_b__2_4(Newtonsoft::Json::Linq::JProperty p) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Converters
// Type: Newtonsoft.Json.Converters::QuaternionConverter
namespace Newtonsoft::Json::Converters {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11772))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11981))
// CS Name: Newtonsoft.Json.Converters.QuaternionConverter
class CORDL_TYPE QuaternionConverter : public Newtonsoft::Json::JsonConverter {
public:
// Declarations
using __c = Newtonsoft::Json::Converters::Newtonsoft__Json__Converters__QuaternionConverter____c;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~QuaternionConverter() = default;

// Ctor Parameters [CppParam { name: "", ty: "QuaternionConverter", modifiers: " const&", def_value: None }]
constexpr QuaternionConverter(QuaternionConverter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "QuaternionConverter", modifiers: "&&", def_value: None }]
constexpr QuaternionConverter(QuaternionConverter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit QuaternionConverter(void* ptr) noexcept : Newtonsoft::Json::JsonConverter(ptr) {
}


  constexpr QuaternionConverter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr QuaternionConverter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr QuaternionConverter& operator=(QuaternionConverter&& o) noexcept = default;
  constexpr QuaternionConverter& operator=(QuaternionConverter const& o) noexcept = default;
                


// Properties

 bool __declspec(property(get=get_CanRead))  CanRead;


// Methods

/// @brief Method WriteJson addr 0x253d74c size 0x334 virtual true final false
 void WriteJson(Newtonsoft::Json::JsonWriter writer, ::bs_hook::Il2CppWrapperType value, Newtonsoft::Json::JsonSerializer serializer) ;

/// @brief Method CanConvert addr 0x253da80 size 0x84 virtual true final false
 bool CanConvert(System::Type objectType) ;

/// @brief Method ReadJson addr 0x253db04 size 0x5fc virtual true final false
 ::bs_hook::Il2CppWrapperType ReadJson(Newtonsoft::Json::JsonReader reader, System::Type objectType, ::bs_hook::Il2CppWrapperType existingValue, Newtonsoft::Json::JsonSerializer serializer) ;

/// @brief Method get_CanRead addr 0x253e100 size 0x8 virtual true final false
 bool get_CanRead() ;

static Newtonsoft::Json::Converters::QuaternionConverter New_ctor() ;

/// @brief Method .ctor addr 0x253e108 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Converters
NEED_NO_BOX(Newtonsoft::Json::Converters::Newtonsoft__Json__Converters__QuaternionConverter____c);
DEFINE_IL2CPP_ARG_TYPE(Newtonsoft::Json::Converters::Newtonsoft__Json__Converters__QuaternionConverter____c, "Newtonsoft.Json.Converters", "QuaternionConverter/<>c");
NEED_NO_BOX(Newtonsoft::Json::Converters::QuaternionConverter);
DEFINE_IL2CPP_ARG_TYPE(Newtonsoft::Json::Converters::QuaternionConverter, "Newtonsoft.Json.Converters", "QuaternionConverter");
