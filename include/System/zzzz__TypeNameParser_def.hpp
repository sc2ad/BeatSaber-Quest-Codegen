#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Reflection {
class AssemblyName;
}
namespace System::Reflection {
class Assembly;
}
namespace System {
template<typename T1,typename T2,typename T3,typename TResult>
class Func_4;
}
namespace System::Threading {
struct StackCrawlMark;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System {
class TypeNameParser;
}
// Type: System::TypeNameParser
namespace System {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2580))
// CS Name: System.TypeNameParser
class CORDL_TYPE TypeNameParser : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~TypeNameParser() = default;

// Ctor Parameters [CppParam { name: "", ty: "TypeNameParser", modifiers: " const&", def_value: None }]
constexpr TypeNameParser(TypeNameParser const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TypeNameParser", modifiers: "&&", def_value: None }]
constexpr TypeNameParser(TypeNameParser&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TypeNameParser(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TypeNameParser& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TypeNameParser& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TypeNameParser& operator=(TypeNameParser&& o) noexcept = default;
  constexpr TypeNameParser& operator=(TypeNameParser const& o) noexcept = default;
                


// Methods

/// @brief Method GetType addr 0x2487e34 size 0x58 virtual false final false
static System::Type GetType(::StringW typeName, System::Func_2<System::Reflection::AssemblyName,System::Reflection::Assembly> assemblyResolver, System::Func_4<System::Reflection::Assembly,::StringW,bool,System::Type> typeResolver, bool throwOnError, bool ignoreCase, ByRef<System::Threading::StackCrawlMark> stackMark) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
NEED_NO_BOX(System::TypeNameParser);
DEFINE_IL2CPP_ARG_TYPE(System::TypeNameParser, "System", "TypeNameParser");
