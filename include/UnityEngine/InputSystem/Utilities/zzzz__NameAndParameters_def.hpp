#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace UnityEngine::InputSystem::Utilities {
struct NamedValue;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::InputSystem::Utilities {
template<typename TValue>
struct ReadOnlyArray_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Utilities {
class UnityEngine__InputSystem__Utilities__NameAndParameters____c;
}
namespace UnityEngine::InputSystem::Utilities {
struct NameAndParameters;
}
// Type: ::<>c
namespace UnityEngine::InputSystem::Utilities {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6764))
// CS Name: UnityEngine.InputSystem.Utilities.NameAndParameters::<>c
class CORDL_TYPE UnityEngine__InputSystem__Utilities__NameAndParameters____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~UnityEngine__InputSystem__Utilities__NameAndParameters____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__InputSystem__Utilities__NameAndParameters____c", modifiers: " const&", def_value: None }]
constexpr UnityEngine__InputSystem__Utilities__NameAndParameters____c(UnityEngine__InputSystem__Utilities__NameAndParameters____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__InputSystem__Utilities__NameAndParameters____c", modifiers: "&&", def_value: None }]
constexpr UnityEngine__InputSystem__Utilities__NameAndParameters____c(UnityEngine__InputSystem__Utilities__NameAndParameters____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__InputSystem__Utilities__NameAndParameters____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__InputSystem__Utilities__NameAndParameters____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__InputSystem__Utilities__NameAndParameters____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__InputSystem__Utilities__NameAndParameters____c& operator=(UnityEngine__InputSystem__Utilities__NameAndParameters____c&& o) noexcept = default;
  constexpr UnityEngine__InputSystem__Utilities__NameAndParameters____c& operator=(UnityEngine__InputSystem__Utilities__NameAndParameters____c const& o) noexcept = default;
                


// Fields

static UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__NameAndParameters____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__NameAndParameters____c value) ;

static UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__NameAndParameters____c __get___9() ;

static System::Func_2<UnityEngine::InputSystem::Utilities::NamedValue,::StringW> __declspec(property(get=__get___9__8_0, put=__set___9__8_0))  __9__8_0;

static void __set___9__8_0(System::Func_2<UnityEngine::InputSystem::Utilities::NamedValue,::StringW> value) ;

static System::Func_2<UnityEngine::InputSystem::Utilities::NamedValue,::StringW> __get___9__8_0() ;


// Methods

// Ctor Parameters []
explicit UnityEngine__InputSystem__Utilities__NameAndParameters____c() ;

/// @brief Method .ctor addr 0x2981f90 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <ToString>b__8_0 addr 0x2981f98 size 0x8 virtual false final false
 ::StringW _ToString_b__8_0(UnityEngine::InputSystem::Utilities::NamedValue x) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Utilities
// Type: UnityEngine.InputSystem.Utilities::NameAndParameters
namespace UnityEngine::InputSystem::Utilities {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6765))
// CS Name: UnityEngine.InputSystem.Utilities.NameAndParameters
struct CORDL_TYPE NameAndParameters : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using __c = UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__NameAndParameters____c;

// Ctor Parameters [CppParam { name: "_name_k__BackingField", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "_parameters_k__BackingField", ty: "UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::Utilities::NamedValue>", modifiers: "", def_value: None }]
constexpr NameAndParameters(::StringW _name_k__BackingField, UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::Utilities::NamedValue> _parameters_k__BackingField) noexcept;


                    constexpr NameAndParameters(NameAndParameters const&) = default;
                    constexpr NameAndParameters(NameAndParameters&&) = default;
                    constexpr NameAndParameters& operator=(NameAndParameters const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr NameAndParameters& operator=(NameAndParameters&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit NameAndParameters(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::StringW __declspec(property(get=__get__name_k__BackingField, put=__set__name_k__BackingField))  _name_k__BackingField;

constexpr void __set__name_k__BackingField(::StringW value) ;

constexpr ::StringW __get__name_k__BackingField() const;

 UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::Utilities::NamedValue> __declspec(property(get=__get__parameters_k__BackingField, put=__set__parameters_k__BackingField))  _parameters_k__BackingField;

constexpr void __set__parameters_k__BackingField(UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::Utilities::NamedValue> value) ;

constexpr UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::Utilities::NamedValue> __get__parameters_k__BackingField() const;


// Properties

 ::StringW __declspec(property(get=get_name, put=set_name))  name;

 UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::Utilities::NamedValue> __declspec(property(get=get_parameters, put=set_parameters))  parameters;


// Methods

/// @brief Method get_name addr 0x2981474 size 0x8 virtual false final false
 ::StringW get_name() ;

/// @brief Method set_name addr 0x298147c size 0x8 virtual false final false
 void set_name(::StringW value) ;

/// @brief Method get_parameters addr 0x2981484 size 0xc virtual false final false
 UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::Utilities::NamedValue> get_parameters() ;

/// @brief Method set_parameters addr 0x2981490 size 0x8 virtual false final false
 void set_parameters(UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::Utilities::NamedValue> value) ;

/// @brief Method ToString addr 0x2981498 size 0x1e8 virtual true final false
 ::StringW ToString() ;

/// @brief Method ParseMultiple addr 0x2981680 size 0x9c virtual false final false
static System::Collections::Generic::IEnumerable_1<UnityEngine::InputSystem::Utilities::NameAndParameters> ParseMultiple(::StringW text) ;

/// @brief Method ParseMultiple addr 0x298171c size 0x1dc virtual false final false
static bool ParseMultiple(::StringW text, ByRef<System::Collections::Generic::List_1<UnityEngine::InputSystem::Utilities::NameAndParameters>> list) ;

/// @brief Method ParseName addr 0x2981c84 size 0x80 virtual false final false
static ::StringW ParseName(::StringW text) ;

/// @brief Method Parse addr 0x2981d04 size 0x90 virtual false final false
static UnityEngine::InputSystem::Utilities::NameAndParameters Parse(::StringW text) ;

/// @brief Method ParseNameAndParameters addr 0x29818f8 size 0x38c virtual false final false
static UnityEngine::InputSystem::Utilities::NameAndParameters ParseNameAndParameters(::StringW text, ByRef<int32_t> index, bool nameOnly) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Utilities
NEED_NO_BOX(UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__NameAndParameters____c);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__NameAndParameters____c, "UnityEngine.InputSystem.Utilities", "NameAndParameters/<>c");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::Utilities::NameAndParameters, "UnityEngine.InputSystem.Utilities", "NameAndParameters");
