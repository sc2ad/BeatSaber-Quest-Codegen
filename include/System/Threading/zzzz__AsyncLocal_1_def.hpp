#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System::Threading {
class IAsyncLocal;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System::Threading {
template<typename T>
struct AsyncLocalValueChangedArgs_1;
}
// Forward declare root types
namespace System::Threading {
template<typename T>
class AsyncLocal_1;
}
namespace System::Threading {
template<::cordl_internals::il2cpp_reference_type T>
class AsyncLocal_1<T>;
}
// Type: System.Threading::AsyncLocal`1
// Type: System.Threading::AsyncLocal`1
namespace System::Threading {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2656))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2656), inst: 2 })
// CS Name: System.Threading.AsyncLocal`1
class CORDL_TYPE AsyncLocal_1<T> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Threading::IAsyncLocal
constexpr operator  System::Threading::IAsyncLocal() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~AsyncLocal_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "AsyncLocal_1", modifiers: " const&", def_value: None }]
constexpr AsyncLocal_1(AsyncLocal_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AsyncLocal_1", modifiers: "&&", def_value: None }]
constexpr AsyncLocal_1(AsyncLocal_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AsyncLocal_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr AsyncLocal_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AsyncLocal_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AsyncLocal_1& operator=(AsyncLocal_1&& o) noexcept = default;
  constexpr AsyncLocal_1& operator=(AsyncLocal_1 const& o) noexcept = default;
                


// Fields

 System::Action_1<System::Threading::AsyncLocalValueChangedArgs_1<T>> __declspec(property(get=__get_m_valueChangedHandler, put=__set_m_valueChangedHandler))  m_valueChangedHandler;

constexpr void __set_m_valueChangedHandler(System::Action_1<System::Threading::AsyncLocalValueChangedArgs_1<T>> value) ;

constexpr System::Action_1<System::Threading::AsyncLocalValueChangedArgs_1<T>> __get_m_valueChangedHandler() const;


// Properties

 T __declspec(property(put=set_Value))  Value;


// Methods

// Ctor Parameters [CppParam { name: "valueChangedHandler", ty: "System::Action_1<System::Threading::AsyncLocalValueChangedArgs_1<T>>", modifiers: "", def_value: None }]
explicit AsyncLocal_1(System::Action_1<System::Threading::AsyncLocalValueChangedArgs_1<T>> valueChangedHandler) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Action_1<System::Threading::AsyncLocalValueChangedArgs_1<T>> valueChangedHandler) ;

/// @brief Method set_Value addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_Value(T value) ;

/// @brief Method System.Threading.IAsyncLocal.OnValueChanged addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_Threading_IAsyncLocal_OnValueChanged(::bs_hook::Il2CppWrapperType previousValueObj, ::bs_hook::Il2CppWrapperType currentValueObj, bool contextChanged) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Threading::AsyncLocal_1, "System.Threading", "AsyncLocal`1");
