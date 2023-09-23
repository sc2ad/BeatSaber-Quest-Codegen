#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace System {
template<typename T>
struct Span_1;
}
namespace System::Text::RegularExpressions {
class RegexNode;
}
namespace System::Collections {
class Hashtable;
}
namespace System::Text::RegularExpressions {
class RegexTree;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Text::RegularExpressions {
class RegexCode;
}
namespace System::Collections::Generic {
template<typename T>
struct ValueListBuilder_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
// Forward declare root types
namespace System::Text::RegularExpressions {
struct RegexWriter;
}
// Type: System.Text.RegularExpressions::RegexWriter
namespace System::Text::RegularExpressions {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7783))
// CS Name: System.Text.RegularExpressions.RegexWriter
struct CORDL_TYPE RegexWriter : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "_emitted", ty: "System::Collections::Generic::ValueListBuilder_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "_intStack", ty: "System::Collections::Generic::ValueListBuilder_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "_stringHash", ty: "System::Collections::Generic::Dictionary_2<::StringW,int32_t>", modifiers: "", def_value: None }, CppParam { name: "_stringTable", ty: "System::Collections::Generic::List_1<::StringW>", modifiers: "", def_value: None }, CppParam { name: "_caps", ty: "System::Collections::Hashtable", modifiers: "", def_value: None }, CppParam { name: "_trackCount", ty: "int32_t", modifiers: "", def_value: None }]
constexpr RegexWriter(System::Collections::Generic::ValueListBuilder_1<int32_t> _emitted, System::Collections::Generic::ValueListBuilder_1<int32_t> _intStack, System::Collections::Generic::Dictionary_2<::StringW,int32_t> _stringHash, System::Collections::Generic::List_1<::StringW> _stringTable, System::Collections::Hashtable _caps, int32_t _trackCount) noexcept;


                    constexpr RegexWriter(RegexWriter const&) = default;
                    constexpr RegexWriter(RegexWriter&&) = default;
                    constexpr RegexWriter& operator=(RegexWriter const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr RegexWriter& operator=(RegexWriter&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x60};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit RegexWriter(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 System::Collections::Generic::ValueListBuilder_1<int32_t> __declspec(property(get=__get__emitted, put=__set__emitted))  _emitted;

constexpr void __set__emitted(System::Collections::Generic::ValueListBuilder_1<int32_t> value) ;

constexpr System::Collections::Generic::ValueListBuilder_1<int32_t> __get__emitted() const;

 System::Collections::Generic::ValueListBuilder_1<int32_t> __declspec(property(get=__get__intStack, put=__set__intStack))  _intStack;

constexpr void __set__intStack(System::Collections::Generic::ValueListBuilder_1<int32_t> value) ;

constexpr System::Collections::Generic::ValueListBuilder_1<int32_t> __get__intStack() const;

 System::Collections::Generic::Dictionary_2<::StringW,int32_t> __declspec(property(get=__get__stringHash, put=__set__stringHash))  _stringHash;

constexpr void __set__stringHash(System::Collections::Generic::Dictionary_2<::StringW,int32_t> value) ;

constexpr System::Collections::Generic::Dictionary_2<::StringW,int32_t> __get__stringHash() const;

 System::Collections::Generic::List_1<::StringW> __declspec(property(get=__get__stringTable, put=__set__stringTable))  _stringTable;

constexpr void __set__stringTable(System::Collections::Generic::List_1<::StringW> value) ;

constexpr System::Collections::Generic::List_1<::StringW> __get__stringTable() const;

 System::Collections::Hashtable __declspec(property(get=__get__caps, put=__set__caps))  _caps;

constexpr void __set__caps(System::Collections::Hashtable value) ;

constexpr System::Collections::Hashtable __get__caps() const;

 int32_t __declspec(property(get=__get__trackCount, put=__set__trackCount))  _trackCount;

constexpr void __set__trackCount(int32_t value) ;

constexpr int32_t __get__trackCount() const;


// Methods

/// @brief Method .ctor addr 0x27d7230 size 0x148 virtual false final false
 void _ctor(System::Span_1<int32_t> emittedSpan, System::Span_1<int32_t> intStackSpan) ;

/// @brief Method Write addr 0x27d7378 size 0x104 virtual false final false
static System::Text::RegularExpressions::RegexCode Write(System::Text::RegularExpressions::RegexTree tree) ;

/// @brief Method Dispose addr 0x27d78dc size 0x54 virtual false final false
 void Dispose() ;

/// @brief Method RegexCodeFromRegexTree addr 0x27d747c size 0x460 virtual false final false
 System::Text::RegularExpressions::RegexCode RegexCodeFromRegexTree(System::Text::RegularExpressions::RegexTree tree) ;

/// @brief Method PatchJump addr 0x27d848c size 0x64 virtual false final false
 void PatchJump(int32_t offset, int32_t jumpDest) ;

/// @brief Method Emit addr 0x27d84f0 size 0xe4 virtual false final false
 void Emit(int32_t op) ;

/// @brief Method Emit addr 0x27d7930 size 0x14c virtual false final false
 void Emit(int32_t op, int32_t opd1) ;

/// @brief Method Emit addr 0x27d85d4 size 0x1ac virtual false final false
 void Emit(int32_t op, int32_t opd1, int32_t opd2) ;

/// @brief Method StringCode addr 0x27d8780 size 0x14c virtual false final false
 int32_t StringCode(::StringW str) ;

/// @brief Method MapCapnum addr 0x27d88cc size 0xb4 virtual false final false
 int32_t MapCapnum(int32_t capnum) ;

/// @brief Method EmitFragment addr 0x27d7a7c size 0xa10 virtual false final false
 void EmitFragment(int32_t nodetype, System::Text::RegularExpressions::RegexNode node, int32_t curIndex) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Text::RegularExpressions
DEFINE_IL2CPP_ARG_TYPE(System::Text::RegularExpressions::RegexWriter, "System.Text.RegularExpressions", "RegexWriter");
