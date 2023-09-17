#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace System::Text::RegularExpressions {
struct RegexPrefix;
}
namespace System::Text::RegularExpressions {
class RegexFC;
}
namespace System::Text::RegularExpressions {
class RegexTree;
}
namespace System {
template<typename T>
struct Span_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::Generic {
template<typename T>
struct ValueListBuilder_1;
}
namespace System::Text::RegularExpressions {
class RegexNode;
}
namespace System {
template<typename T>
struct Nullable_1;
}
// Forward declare root types
namespace System::Text::RegularExpressions {
struct RegexFCD;
}
// Type: System.Text.RegularExpressions::RegexFCD
namespace System::Text::RegularExpressions {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7771))
// CS Name: System.Text.RegularExpressions.RegexFCD
struct CORDL_TYPE RegexFCD : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "_fcStack", ty: "::System::Collections::Generic::List_1<::System::Text::RegularExpressions::RegexFC>", modifiers: "", def_value: None }, CppParam { name: "_intStack", ty: "::System::Collections::Generic::ValueListBuilder_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "_skipAllChildren", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_skipchild", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_failed", ty: "bool", modifiers: "", def_value: None }]
constexpr RegexFCD(::System::Collections::Generic::List_1<::System::Text::RegularExpressions::RegexFC> _fcStack, ::System::Collections::Generic::ValueListBuilder_1<int32_t> _intStack, bool _skipAllChildren, bool _skipchild, bool _failed) noexcept;


                    constexpr RegexFCD(RegexFCD const&) = default;
                    constexpr RegexFCD(RegexFCD&&) = default;
                    constexpr RegexFCD& operator=(RegexFCD const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr RegexFCD& operator=(RegexFCD&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x30};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit RegexFCD(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::System::Collections::Generic::List_1<::System::Text::RegularExpressions::RegexFC> __declspec(property(get=__get__fcStack, put=__set__fcStack))  _fcStack;

constexpr void __set__fcStack(::System::Collections::Generic::List_1<::System::Text::RegularExpressions::RegexFC> value) ;

constexpr ::System::Collections::Generic::List_1<::System::Text::RegularExpressions::RegexFC> __get__fcStack() const;

 ::System::Collections::Generic::ValueListBuilder_1<int32_t> __declspec(property(get=__get__intStack, put=__set__intStack))  _intStack;

constexpr void __set__intStack(::System::Collections::Generic::ValueListBuilder_1<int32_t> value) ;

constexpr ::System::Collections::Generic::ValueListBuilder_1<int32_t> __get__intStack() const;

 bool __declspec(property(get=__get__skipAllChildren, put=__set__skipAllChildren))  _skipAllChildren;

constexpr void __set__skipAllChildren(bool value) ;

constexpr bool __get__skipAllChildren() const;

 bool __declspec(property(get=__get__skipchild, put=__set__skipchild))  _skipchild;

constexpr void __set__skipchild(bool value) ;

constexpr bool __get__skipchild() const;

 bool __declspec(property(get=__get__failed, put=__set__failed))  _failed;

constexpr void __set__failed(bool value) ;

constexpr bool __get__failed() const;


// Methods

/// @brief Method .ctor addr 0x27cbb24 size 0xd4 virtual false final false
 void _ctor(::System::Span_1<int32_t> intStack) ;

/// @brief Method FirstChars addr 0x27cbbf8 size 0x180 virtual false final false
static ::System::Nullable_1<::System::Text::RegularExpressions::RegexPrefix> FirstChars(::System::Text::RegularExpressions::RegexTree t) ;

/// @brief Method Prefix addr 0x27cbfa0 size 0x218 virtual false final false
static ::System::Text::RegularExpressions::RegexPrefix Prefix(::System::Text::RegularExpressions::RegexTree tree) ;

/// @brief Method Anchors addr 0x27cc25c size 0x130 virtual false final false
static int32_t Anchors(::System::Text::RegularExpressions::RegexTree tree) ;

/// @brief Method AnchorFromType addr 0x27cc38c size 0x70 virtual false final false
static int32_t AnchorFromType(int32_t type) ;

/// @brief Method PushInt addr 0x27cc3fc size 0xb4 virtual false final false
 void PushInt(int32_t i) ;

/// @brief Method IntIsEmpty addr 0x27cc4b0 size 0x44 virtual false final false
 bool IntIsEmpty() ;

/// @brief Method PopInt addr 0x27cc4f4 size 0x5c virtual false final false
 int32_t PopInt() ;

/// @brief Method PushFC addr 0x27cc550 size 0xa8 virtual false final false
 void PushFC(::System::Text::RegularExpressions::RegexFC fc) ;

/// @brief Method FCIsEmpty addr 0x27cc5f8 size 0x50 virtual false final false
 bool FCIsEmpty() ;

/// @brief Method PopFC addr 0x27cc648 size 0x7c virtual false final false
 ::System::Text::RegularExpressions::RegexFC PopFC() ;

/// @brief Method TopFC addr 0x27cc6c4 size 0x64 virtual false final false
 ::System::Text::RegularExpressions::RegexFC TopFC() ;

/// @brief Method Dispose addr 0x27cbf10 size 0x48 virtual false final false
 void Dispose() ;

/// @brief Method RegexFCFromRegexTree addr 0x27cbd78 size 0x198 virtual false final false
 ::System::Text::RegularExpressions::RegexFC RegexFCFromRegexTree(::System::Text::RegularExpressions::RegexTree tree) ;

/// @brief Method SkipChild addr 0x27ccb14 size 0xc virtual false final false
 void SkipChild() ;

/// @brief Method CalculateFC addr 0x27cc728 size 0x3ec virtual false final false
 void CalculateFC(int32_t NodeType, ::System::Text::RegularExpressions::RegexNode node, int32_t CurIndex) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Text::RegularExpressions
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::System::Text::RegularExpressions::RegexFCD, "System.Text.RegularExpressions", "RegexFCD");
