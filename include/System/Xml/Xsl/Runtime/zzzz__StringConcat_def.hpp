#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace System::Xml::Xsl::Runtime {
struct StringConcat;
}
// Type: System.Xml.Xsl.Runtime::StringConcat
namespace System::Xml::Xsl::Runtime {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11534))
// CS Name: System.Xml.Xsl.Runtime.StringConcat
struct CORDL_TYPE StringConcat : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "s1", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "s2", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "s3", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "s4", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "delimiter", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "strList", ty: "::System::Collections::Generic::List_1<::StringW>", modifiers: "", def_value: None }, CppParam { name: "idxStr", ty: "int32_t", modifiers: "", def_value: None }]
constexpr StringConcat(::StringW s1, ::StringW s2, ::StringW s3, ::StringW s4, ::StringW delimiter, ::System::Collections::Generic::List_1<::StringW> strList, int32_t idxStr) noexcept;


                    constexpr StringConcat(StringConcat const&) = default;
                    constexpr StringConcat(StringConcat&&) = default;
                    constexpr StringConcat& operator=(StringConcat const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr StringConcat& operator=(StringConcat&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x38};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit StringConcat(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::StringW __declspec(property(get=__get_s1, put=__set_s1))  s1;

constexpr void __set_s1(::StringW value) ;

constexpr ::StringW __get_s1() const;

 ::StringW __declspec(property(get=__get_s2, put=__set_s2))  s2;

constexpr void __set_s2(::StringW value) ;

constexpr ::StringW __get_s2() const;

 ::StringW __declspec(property(get=__get_s3, put=__set_s3))  s3;

constexpr void __set_s3(::StringW value) ;

constexpr ::StringW __get_s3() const;

 ::StringW __declspec(property(get=__get_s4, put=__set_s4))  s4;

constexpr void __set_s4(::StringW value) ;

constexpr ::StringW __get_s4() const;

 ::StringW __declspec(property(get=__get_delimiter, put=__set_delimiter))  delimiter;

constexpr void __set_delimiter(::StringW value) ;

constexpr ::StringW __get_delimiter() const;

 ::System::Collections::Generic::List_1<::StringW> __declspec(property(get=__get_strList, put=__set_strList))  strList;

constexpr void __set_strList(::System::Collections::Generic::List_1<::StringW> value) ;

constexpr ::System::Collections::Generic::List_1<::StringW> __get_strList() const;

 int32_t __declspec(property(get=__get_idxStr, put=__set_idxStr))  idxStr;

constexpr void __set_idxStr(int32_t value) ;

constexpr int32_t __get_idxStr() const;


// Properties

 int32_t __declspec(property(get=get_Count))  Count;


// Methods

/// @brief Method Clear addr 0x271862c size 0xc virtual false final false
 void Clear() ;

/// @brief Method get_Count addr 0x2718638 size 0x8 virtual false final false
 int32_t get_Count() ;

/// @brief Method GetResult addr 0x2718640 size 0xf4 virtual false final false
 ::StringW GetResult() ;

/// @brief Method ConcatNoDelimiter addr 0x2718734 size 0x2b8 virtual false final false
 void ConcatNoDelimiter(::StringW s) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Xml::Xsl::Runtime
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Xsl::Runtime::StringConcat, "System.Xml.Xsl.Runtime", "StringConcat");
