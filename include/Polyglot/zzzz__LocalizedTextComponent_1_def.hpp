#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace Polyglot {
class ILocalize;
}
namespace Polyglot {
struct LanguageDirection;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace Polyglot {
template<typename T>
class LocalizedTextComponent_1;
}
namespace Polyglot {
template<::cordl_internals::il2cpp_reference_type T>
class LocalizedTextComponent_1<T>;
}
// Type: Polyglot::LocalizedTextComponent`1
// Type: Polyglot::LocalizedTextComponent`1
namespace Polyglot {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15541)), TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(15541), inst: 2 })
// CS Name: Polyglot.LocalizedTextComponent`1
class CORDL_TYPE LocalizedTextComponent_1<T> : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Convert operator to Polyglot::ILocalize
constexpr operator  Polyglot::ILocalize() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~LocalizedTextComponent_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "LocalizedTextComponent_1", modifiers: " const&", def_value: None }]
constexpr LocalizedTextComponent_1(LocalizedTextComponent_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LocalizedTextComponent_1", modifiers: "&&", def_value: None }]
constexpr LocalizedTextComponent_1(LocalizedTextComponent_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LocalizedTextComponent_1(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr LocalizedTextComponent_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LocalizedTextComponent_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LocalizedTextComponent_1& operator=(LocalizedTextComponent_1&& o) noexcept = default;
  constexpr LocalizedTextComponent_1& operator=(LocalizedTextComponent_1 const& o) noexcept = default;
                


// Fields

 T __declspec(property(get=__get_localizedComponent, put=__set_localizedComponent))  localizedComponent;

constexpr void __set_localizedComponent(T value) ;

constexpr T __get_localizedComponent() const;

 bool __declspec(property(get=__get_maintainTextAlignment, put=__set_maintainTextAlignment))  maintainTextAlignment;

constexpr void __set_maintainTextAlignment(bool value) ;

constexpr bool __get_maintainTextAlignment() const;

 ::StringW __declspec(property(get=__get_key, put=__set_key))  key;

constexpr void __set_key(::StringW value) ;

constexpr ::StringW __get_key() const;

 System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType> __declspec(property(get=__get_parameters, put=__set_parameters))  parameters;

constexpr void __set_parameters(System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType> value) ;

constexpr System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType> __get_parameters() const;


// Properties

 bool __declspec(property(get=get_MaintainTextAlignment, put=set_MaintainTextAlignment))  MaintainTextAlignment;

 ::StringW __declspec(property(get=get_Key, put=set_Key))  Key;

 System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType> __declspec(property(get=get_Parameters))  Parameters;


// Methods

/// @brief Method get_MaintainTextAlignment addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_MaintainTextAlignment() ;

/// @brief Method set_MaintainTextAlignment addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_MaintainTextAlignment(bool value) ;

/// @brief Method get_Key addr 0x0 size 0xffffffffffffffff virtual false final false
 ::StringW get_Key() ;

/// @brief Method set_Key addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_Key(::StringW value) ;

/// @brief Method get_Parameters addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType> get_Parameters() ;

/// @brief Method OnEnable addr 0x0 size 0xffffffffffffffff virtual false final false
 void OnEnable() ;

/// @brief Method SetText addr 0x0 size 0xffffffffffffffff virtual true final false
 void SetText(T component, ::StringW value) ;

/// @brief Method UpdateAlignment addr 0x0 size 0xffffffffffffffff virtual true final false
 void UpdateAlignment(T component, Polyglot::LanguageDirection direction) ;

/// @brief Method OnLocalize addr 0x0 size 0xffffffffffffffff virtual true final true
 void OnLocalize() ;

/// @brief Method ClearParameters addr 0x0 size 0xffffffffffffffff virtual false final false
 void ClearParameters() ;

/// @brief Method AddParameter addr 0x0 size 0xffffffffffffffff virtual false final false
 void AddParameter(::bs_hook::Il2CppWrapperType parameter) ;

/// @brief Method AddParameter addr 0x0 size 0xffffffffffffffff virtual false final false
 void AddParameter(int32_t parameter) ;

/// @brief Method AddParameter addr 0x0 size 0xffffffffffffffff virtual false final false
 void AddParameter(float_t parameter) ;

/// @brief Method AddParameter addr 0x0 size 0xffffffffffffffff virtual false final false
 void AddParameter(::StringW parameter) ;

// Ctor Parameters []
explicit LocalizedTextComponent_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Polyglot
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Polyglot::LocalizedTextComponent_1, "Polyglot", "LocalizedTextComponent`1");
