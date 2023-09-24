#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace GlobalNamespace {
class GlobalNamespace__LevelMissionParser__ParserFunction;
}
// Forward declare root types
namespace GlobalNamespace {
class GlobalNamespace__LevelMissionParser__ParserFunction;
}
namespace GlobalNamespace {
class LevelMissionParser;
}
// Type: ::ParserFunction
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4265))
// CS Name: LevelMissionParser::ParserFunction
class CORDL_TYPE GlobalNamespace__LevelMissionParser__ParserFunction : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~GlobalNamespace__LevelMissionParser__ParserFunction() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__LevelMissionParser__ParserFunction", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__LevelMissionParser__ParserFunction(GlobalNamespace__LevelMissionParser__ParserFunction const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__LevelMissionParser__ParserFunction", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__LevelMissionParser__ParserFunction(GlobalNamespace__LevelMissionParser__ParserFunction&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__LevelMissionParser__ParserFunction(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr GlobalNamespace__LevelMissionParser__ParserFunction& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__LevelMissionParser__ParserFunction& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__LevelMissionParser__ParserFunction& operator=(GlobalNamespace__LevelMissionParser__ParserFunction&& o) noexcept = default;
  constexpr GlobalNamespace__LevelMissionParser__ParserFunction& operator=(GlobalNamespace__LevelMissionParser__ParserFunction const& o) noexcept = default;
                


// Methods

static GlobalNamespace::GlobalNamespace__LevelMissionParser__ParserFunction New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x21c90cc size 0xd8 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x21c91a4 size 0x14 virtual true final false
 bool Invoke(::ArrayW<float_t> functionParams, int32_t paramCount) ;

/// @brief Method BeginInvoke addr 0x21c91b8 size 0x94 virtual true final false
 System::IAsyncResult BeginInvoke(::ArrayW<float_t> functionParams, int32_t paramCount, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x21c924c size 0x28 virtual true final false
 bool EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::LevelMissionParser
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4266))
// CS Name: LevelMissionParser
class CORDL_TYPE LevelMissionParser : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using ParserFunction = GlobalNamespace::GlobalNamespace__LevelMissionParser__ParserFunction;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~LevelMissionParser() = default;

// Ctor Parameters [CppParam { name: "", ty: "LevelMissionParser", modifiers: " const&", def_value: None }]
constexpr LevelMissionParser(LevelMissionParser const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LevelMissionParser", modifiers: "&&", def_value: None }]
constexpr LevelMissionParser(LevelMissionParser&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LevelMissionParser(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr LevelMissionParser& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LevelMissionParser& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LevelMissionParser& operator=(LevelMissionParser&& o) noexcept = default;
  constexpr LevelMissionParser& operator=(LevelMissionParser const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::Dictionary_2<::StringW,GlobalNamespace::GlobalNamespace__LevelMissionParser__ParserFunction> __declspec(property(get=__get__functions, put=__set__functions))  _functions;

constexpr void __set__functions(System::Collections::Generic::Dictionary_2<::StringW,GlobalNamespace::GlobalNamespace__LevelMissionParser__ParserFunction> value) ;

constexpr System::Collections::Generic::Dictionary_2<::StringW,GlobalNamespace::GlobalNamespace__LevelMissionParser__ParserFunction> __get__functions() const;


// Methods

static GlobalNamespace::LevelMissionParser New_ctor() ;

/// @brief Method .ctor addr 0x21c8a08 size 0x84 virtual false final false
 void _ctor() ;

/// @brief Method AddFunction addr 0x21c8a8c size 0x68 virtual false final false
 void AddFunction(::StringW name, GlobalNamespace::GlobalNamespace__LevelMissionParser__ParserFunction function) ;

/// @brief Method Parse addr 0x21c8af4 size 0x1c virtual false final false
 bool Parse(::StringW s) ;

/// @brief Method Parse addr 0x21c8b10 size 0x2c8 virtual false final false
 bool Parse(::StringW s, int32_t start, int32_t length) ;

/// @brief Method ParseFunction addr 0x21c8dd8 size 0x2f4 virtual false final false
 bool ParseFunction(::StringW s, int32_t start, int32_t length) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__LevelMissionParser__ParserFunction);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__LevelMissionParser__ParserFunction, "", "LevelMissionParser/ParserFunction");
NEED_NO_BOX(GlobalNamespace::LevelMissionParser);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LevelMissionParser, "", "LevelMissionParser");
