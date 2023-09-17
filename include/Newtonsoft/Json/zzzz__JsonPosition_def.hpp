#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Text {
class StringBuilder;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace Newtonsoft::Json {
class IJsonLineInfo;
}
namespace Newtonsoft::Json {
struct JsonContainerType;
}
// Forward declare root types
namespace Newtonsoft::Json {
struct JsonPosition;
}
// Type: Newtonsoft.Json::JsonPosition
namespace Newtonsoft::Json {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11749))
// CS Name: Newtonsoft.Json.JsonPosition
struct CORDL_TYPE JsonPosition : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "Type", ty: "::Newtonsoft::Json::JsonContainerType", modifiers: "", def_value: None }, CppParam { name: "Position", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "PropertyName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "HasIndex", ty: "bool", modifiers: "", def_value: None }]
constexpr JsonPosition(::Newtonsoft::Json::JsonContainerType Type, int32_t Position, ::StringW PropertyName, bool HasIndex) noexcept;


                    constexpr JsonPosition(JsonPosition const&) = default;
                    constexpr JsonPosition(JsonPosition&&) = default;
                    constexpr JsonPosition& operator=(JsonPosition const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr JsonPosition& operator=(JsonPosition&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit JsonPosition(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

static ::ArrayW<char16_t> __declspec(property(get=__get_SpecialCharacters, put=__set_SpecialCharacters))  SpecialCharacters;

static void __set_SpecialCharacters(::ArrayW<char16_t> value) ;

static ::ArrayW<char16_t> __get_SpecialCharacters() ;

 ::Newtonsoft::Json::JsonContainerType __declspec(property(get=__get_Type, put=__set_Type))  Type;

constexpr void __set_Type(::Newtonsoft::Json::JsonContainerType value) ;

constexpr ::Newtonsoft::Json::JsonContainerType __get_Type() const;

 int32_t __declspec(property(get=__get_Position, put=__set_Position))  Position;

constexpr void __set_Position(int32_t value) ;

constexpr int32_t __get_Position() const;

 ::StringW __declspec(property(get=__get_PropertyName, put=__set_PropertyName))  PropertyName;

constexpr void __set_PropertyName(::StringW value) ;

constexpr ::StringW __get_PropertyName() const;

 bool __declspec(property(get=__get_HasIndex, put=__set_HasIndex))  HasIndex;

constexpr void __set_HasIndex(bool value) ;

constexpr bool __get_HasIndex() const;


// Methods

/// @brief Method .ctor addr 0x24c79b4 size 0x7c virtual false final false
 void _ctor(::Newtonsoft::Json::JsonContainerType type) ;

/// @brief Method CalculateLength addr 0x24c7a40 size 0x98 virtual false final false
 int32_t CalculateLength() ;

/// @brief Method WriteTo addr 0x24c7ad8 size 0x168 virtual false final false
 void WriteTo(::System::Text::StringBuilder sb) ;

/// @brief Method TypeHasIndex addr 0x24c7a30 size 0x10 virtual false final false
static bool TypeHasIndex(::Newtonsoft::Json::JsonContainerType type) ;

/// @brief Method BuildPath addr 0x24c7c40 size 0x29c virtual false final false
static ::StringW BuildPath(::System::Collections::Generic::List_1<::Newtonsoft::Json::JsonPosition> positions, ::System::Nullable_1<::Newtonsoft::Json::JsonPosition> currentPosition) ;

/// @brief Method FormatMessage addr 0x24c7640 size 0x32c virtual false final false
static ::StringW FormatMessage(::Newtonsoft::Json::IJsonLineInfo lineInfo, ::StringW path, ::StringW message) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::JsonPosition, "Newtonsoft.Json", "JsonPosition");
