#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
namespace {
namespace UnityEngine::InputSystem::Utilities {
struct InternedString;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System {
class Type;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Utilities {
class ____UnityEngine__InputSystem__Utilities__TypeTable____c;
}
namespace UnityEngine::InputSystem::Utilities {
struct TypeTable;
}
// Type: ::<>c
namespace UnityEngine::InputSystem::Utilities {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6794))
// CS Name: UnityEngine.InputSystem.Utilities.TypeTable::<>c
class CORDL_TYPE ____UnityEngine__InputSystem__Utilities__TypeTable____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~____UnityEngine__InputSystem__Utilities__TypeTable____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__InputSystem__Utilities__TypeTable____c", modifiers: " const&", def_value: None }]
constexpr ____UnityEngine__InputSystem__Utilities__TypeTable____c(____UnityEngine__InputSystem__Utilities__TypeTable____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__InputSystem__Utilities__TypeTable____c", modifiers: "&&", def_value: None }]
constexpr ____UnityEngine__InputSystem__Utilities__TypeTable____c(____UnityEngine__InputSystem__Utilities__TypeTable____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__InputSystem__Utilities__TypeTable____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____UnityEngine__InputSystem__Utilities__TypeTable____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____UnityEngine__InputSystem__Utilities__TypeTable____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____UnityEngine__InputSystem__Utilities__TypeTable____c& operator=(____UnityEngine__InputSystem__Utilities__TypeTable____c&& o) noexcept = default;
  constexpr ____UnityEngine__InputSystem__Utilities__TypeTable____c& operator=(____UnityEngine__InputSystem__Utilities__TypeTable____c const& o) noexcept = default;
                


// Fields

static ::UnityEngine::InputSystem::Utilities::____UnityEngine__InputSystem__Utilities__TypeTable____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(::UnityEngine::InputSystem::Utilities::____UnityEngine__InputSystem__Utilities__TypeTable____c value) ;

static ::UnityEngine::InputSystem::Utilities::____UnityEngine__InputSystem__Utilities__TypeTable____c __get___9() ;

static ::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString,::StringW> __declspec(property(get=__get___9__2_0, put=__set___9__2_0))  __9__2_0;

static void __set___9__2_0(::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString,::StringW> value) ;

static ::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString,::StringW> __get___9__2_0() ;


// Methods

// Ctor Parameters []
explicit ____UnityEngine__InputSystem__Utilities__TypeTable____c() ;

/// @brief Method .ctor addr 0x28c8120 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <get_names>b__2_0 addr 0x28c8128 size 0x24 virtual false final false
 ::StringW _get_names_b__2_0(::UnityEngine::InputSystem::Utilities::InternedString x) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Utilities
// Type: UnityEngine.InputSystem.Utilities::TypeTable
namespace UnityEngine::InputSystem::Utilities {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6795))
// CS Name: UnityEngine.InputSystem.Utilities.TypeTable
struct CORDL_TYPE TypeTable : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using __c = ::UnityEngine::InputSystem::Utilities::____UnityEngine__InputSystem__Utilities__TypeTable____c;

// Ctor Parameters [CppParam { name: "table", ty: "::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString,::System::Type>", modifiers: "", def_value: None }]
constexpr TypeTable(::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString,::System::Type> table) noexcept;


                    constexpr TypeTable(TypeTable const&) = default;
                    constexpr TypeTable(TypeTable&&) = default;
                    constexpr TypeTable& operator=(TypeTable const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr TypeTable& operator=(TypeTable&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit TypeTable(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString,::System::Type> __declspec(property(get=__get_table, put=__set_table))  table;

constexpr void __set_table(::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString,::System::Type> value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString,::System::Type> __get_table() const;


// Properties

 ::System::Collections::Generic::IEnumerable_1<::StringW> __declspec(property(get=get_names))  names;

 ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::InternedString> __declspec(property(get=get_internedNames))  internedNames;


// Methods

/// @brief Method get_names addr 0x28c7a50 size 0x128 virtual false final false
 ::System::Collections::Generic::IEnumerable_1<::StringW> get_names() ;

/// @brief Method get_internedNames addr 0x28c7b78 size 0x50 virtual false final false
 ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::InternedString> get_internedNames() ;

/// @brief Method Initialize addr 0x28c7bc8 size 0x74 virtual false final false
 void Initialize() ;

/// @brief Method FindNameForType addr 0x28c7c3c size 0x220 virtual false final false
 ::UnityEngine::InputSystem::Utilities::InternedString FindNameForType(::System::Type type) ;

/// @brief Method AddTypeRegistration addr 0x28c7e5c size 0x168 virtual false final false
 void AddTypeRegistration(::StringW name, ::System::Type type) ;

/// @brief Method LookupTypeRegistration addr 0x28c7fc4 size 0xf8 virtual false final false
 ::System::Type LookupTypeRegistration(::StringW name) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Utilities
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::InputSystem::Utilities::____UnityEngine__InputSystem__Utilities__TypeTable____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Utilities::____UnityEngine__InputSystem__Utilities__TypeTable____c, "UnityEngine.InputSystem.Utilities", "TypeTable/<>c");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Utilities::TypeTable, "UnityEngine.InputSystem.Utilities", "TypeTable");
