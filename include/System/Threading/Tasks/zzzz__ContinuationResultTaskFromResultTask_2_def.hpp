#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace System::Threading::Tasks {
struct InternalTaskOptions;
}
namespace System::Threading::Tasks {
struct TaskCreationOptions;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System {
class Delegate;
}
// Forward declare root types
namespace System::Threading::Tasks {
template<typename TAntecedentResult,typename TResult>
class ContinuationResultTaskFromResultTask_2;
}
namespace System::Threading::Tasks {
template<::cordl_internals::is_or_is_backed_by<int32_t> TAntecedentResult>
class ContinuationResultTaskFromResultTask_2<TAntecedentResult,System::Nullable_1<int32_t>>;
}
namespace System::Threading::Tasks {
template<::cordl_internals::il2cpp_reference_type TAntecedentResult>
class ContinuationResultTaskFromResultTask_2<TAntecedentResult,System::Nullable_1<int32_t>>;
}
namespace System::Threading::Tasks {
template<::cordl_internals::il2cpp_reference_type TAntecedentResult,::cordl_internals::il2cpp_reference_type TResult>
class ContinuationResultTaskFromResultTask_2<TAntecedentResult,TResult>;
}
// Type: System.Threading.Tasks::ContinuationResultTaskFromResultTask`2
// Type: System.Threading.Tasks::ContinuationResultTaskFromResultTask`2
namespace System::Threading::Tasks {
// cpp template
template<::cordl_internals::il2cpp_reference_type TAntecedentResult>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2770), inst: 4957 }), TypeDefinitionIndex(TypeDefinitionIndex(2796)), TypeDefinitionIndex(TypeDefinitionIndex(2770))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2796), inst: 6714 })
// CS Name: System.Threading.Tasks.ContinuationResultTaskFromResultTask`2
class CORDL_TYPE ContinuationResultTaskFromResultTask_2<TAntecedentResult,System::Nullable_1<int32_t>> : public System::Threading::Tasks::Task_1<System::Nullable_1<int32_t>> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~ContinuationResultTaskFromResultTask_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "ContinuationResultTaskFromResultTask_2", modifiers: " const&", def_value: None }]
constexpr ContinuationResultTaskFromResultTask_2(ContinuationResultTaskFromResultTask_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ContinuationResultTaskFromResultTask_2", modifiers: "&&", def_value: None }]
constexpr ContinuationResultTaskFromResultTask_2(ContinuationResultTaskFromResultTask_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ContinuationResultTaskFromResultTask_2(void* ptr) noexcept : System::Threading::Tasks::Task_1<System::Nullable_1<int32_t>>(ptr) {
}


  constexpr ContinuationResultTaskFromResultTask_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ContinuationResultTaskFromResultTask_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ContinuationResultTaskFromResultTask_2& operator=(ContinuationResultTaskFromResultTask_2&& o) noexcept = default;
  constexpr ContinuationResultTaskFromResultTask_2& operator=(ContinuationResultTaskFromResultTask_2 const& o) noexcept = default;
                


// Fields

 System::Threading::Tasks::Task_1<TAntecedentResult> __declspec(property(get=__get_m_antecedent, put=__set_m_antecedent))  m_antecedent;

constexpr void __set_m_antecedent(System::Threading::Tasks::Task_1<TAntecedentResult> value) ;

constexpr System::Threading::Tasks::Task_1<TAntecedentResult> __get_m_antecedent() const;


// Methods

static System::Threading::Tasks::ContinuationResultTaskFromResultTask_2<TAntecedentResult,System::Nullable_1<int32_t>> New_ctor(System::Threading::Tasks::Task_1<TAntecedentResult> antecedent, System::Delegate function, ::bs_hook::Il2CppWrapperType state, System::Threading::Tasks::TaskCreationOptions creationOptions, System::Threading::Tasks::InternalTaskOptions internalOptions) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Threading::Tasks::Task_1<TAntecedentResult> antecedent, System::Delegate function, ::bs_hook::Il2CppWrapperType state, System::Threading::Tasks::TaskCreationOptions creationOptions, System::Threading::Tasks::InternalTaskOptions internalOptions) ;

/// @brief Method InnerInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void InnerInvoke() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: System.Threading.Tasks::ContinuationResultTaskFromResultTask`2
namespace System::Threading::Tasks {
// cpp template
template<::cordl_internals::is_or_is_backed_by<int32_t> TAntecedentResult>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2796)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2770), inst: 4957 }), TypeDefinitionIndex(TypeDefinitionIndex(2770))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2796), inst: 6713 })
// CS Name: System.Threading.Tasks.ContinuationResultTaskFromResultTask`2
class CORDL_TYPE ContinuationResultTaskFromResultTask_2<TAntecedentResult,System::Nullable_1<int32_t>> : public System::Threading::Tasks::Task_1<System::Nullable_1<int32_t>> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~ContinuationResultTaskFromResultTask_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "ContinuationResultTaskFromResultTask_2", modifiers: " const&", def_value: None }]
constexpr ContinuationResultTaskFromResultTask_2(ContinuationResultTaskFromResultTask_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ContinuationResultTaskFromResultTask_2", modifiers: "&&", def_value: None }]
constexpr ContinuationResultTaskFromResultTask_2(ContinuationResultTaskFromResultTask_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ContinuationResultTaskFromResultTask_2(void* ptr) noexcept : System::Threading::Tasks::Task_1<System::Nullable_1<int32_t>>(ptr) {
}


  constexpr ContinuationResultTaskFromResultTask_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ContinuationResultTaskFromResultTask_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ContinuationResultTaskFromResultTask_2& operator=(ContinuationResultTaskFromResultTask_2&& o) noexcept = default;
  constexpr ContinuationResultTaskFromResultTask_2& operator=(ContinuationResultTaskFromResultTask_2 const& o) noexcept = default;
                


// Fields

 System::Threading::Tasks::Task_1<TAntecedentResult> __declspec(property(get=__get_m_antecedent, put=__set_m_antecedent))  m_antecedent;

constexpr void __set_m_antecedent(System::Threading::Tasks::Task_1<TAntecedentResult> value) ;

constexpr System::Threading::Tasks::Task_1<TAntecedentResult> __get_m_antecedent() const;


// Methods

static System::Threading::Tasks::ContinuationResultTaskFromResultTask_2<TAntecedentResult,System::Nullable_1<int32_t>> New_ctor(System::Threading::Tasks::Task_1<TAntecedentResult> antecedent, System::Delegate function, ::bs_hook::Il2CppWrapperType state, System::Threading::Tasks::TaskCreationOptions creationOptions, System::Threading::Tasks::InternalTaskOptions internalOptions) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Threading::Tasks::Task_1<TAntecedentResult> antecedent, System::Delegate function, ::bs_hook::Il2CppWrapperType state, System::Threading::Tasks::TaskCreationOptions creationOptions, System::Threading::Tasks::InternalTaskOptions internalOptions) ;

/// @brief Method InnerInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void InnerInvoke() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: System.Threading.Tasks::ContinuationResultTaskFromResultTask`2
namespace System::Threading::Tasks {
// cpp template
template<::cordl_internals::il2cpp_reference_type TAntecedentResult,::cordl_internals::il2cpp_reference_type TResult>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2796)), TypeDefinitionIndex(TypeDefinitionIndex(2770)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2770), inst: 4957 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2796), inst: 80 })
// CS Name: System.Threading.Tasks.ContinuationResultTaskFromResultTask`2
class CORDL_TYPE ContinuationResultTaskFromResultTask_2<TAntecedentResult,TResult> : public System::Threading::Tasks::Task_1<TResult> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~ContinuationResultTaskFromResultTask_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "ContinuationResultTaskFromResultTask_2", modifiers: " const&", def_value: None }]
constexpr ContinuationResultTaskFromResultTask_2(ContinuationResultTaskFromResultTask_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ContinuationResultTaskFromResultTask_2", modifiers: "&&", def_value: None }]
constexpr ContinuationResultTaskFromResultTask_2(ContinuationResultTaskFromResultTask_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ContinuationResultTaskFromResultTask_2(void* ptr) noexcept : System::Threading::Tasks::Task_1<TResult>(ptr) {
}


  constexpr ContinuationResultTaskFromResultTask_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ContinuationResultTaskFromResultTask_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ContinuationResultTaskFromResultTask_2& operator=(ContinuationResultTaskFromResultTask_2&& o) noexcept = default;
  constexpr ContinuationResultTaskFromResultTask_2& operator=(ContinuationResultTaskFromResultTask_2 const& o) noexcept = default;
                


// Fields

 System::Threading::Tasks::Task_1<TAntecedentResult> __declspec(property(get=__get_m_antecedent, put=__set_m_antecedent))  m_antecedent;

constexpr void __set_m_antecedent(System::Threading::Tasks::Task_1<TAntecedentResult> value) ;

constexpr System::Threading::Tasks::Task_1<TAntecedentResult> __get_m_antecedent() const;


// Methods

static System::Threading::Tasks::ContinuationResultTaskFromResultTask_2<TAntecedentResult,TResult> New_ctor(System::Threading::Tasks::Task_1<TAntecedentResult> antecedent, System::Delegate function, ::bs_hook::Il2CppWrapperType state, System::Threading::Tasks::TaskCreationOptions creationOptions, System::Threading::Tasks::InternalTaskOptions internalOptions) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Threading::Tasks::Task_1<TAntecedentResult> antecedent, System::Delegate function, ::bs_hook::Il2CppWrapperType state, System::Threading::Tasks::TaskCreationOptions creationOptions, System::Threading::Tasks::InternalTaskOptions internalOptions) ;

/// @brief Method InnerInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void InnerInvoke() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Threading::Tasks::ContinuationResultTaskFromResultTask_2, "System.Threading.Tasks", "ContinuationResultTaskFromResultTask`2");
