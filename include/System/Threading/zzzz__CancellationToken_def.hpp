#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace System::Threading {
class CancellationTokenSource;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Action;
}
namespace System::Threading {
struct CancellationTokenRegistration;
}
// Forward declare root types
namespace System::Threading {
class ____System__Threading__CancellationToken____c;
}
namespace System::Threading {
struct CancellationToken;
}
// Type: ::<>c
namespace System::Threading {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2675))
// CS Name: System.Threading.CancellationToken::<>c
class CORDL_TYPE ____System__Threading__CancellationToken____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~____System__Threading__CancellationToken____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "____System__Threading__CancellationToken____c", modifiers: " const&", def_value: None }]
constexpr ____System__Threading__CancellationToken____c(____System__Threading__CancellationToken____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____System__Threading__CancellationToken____c", modifiers: "&&", def_value: None }]
constexpr ____System__Threading__CancellationToken____c(____System__Threading__CancellationToken____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____System__Threading__CancellationToken____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____System__Threading__CancellationToken____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____System__Threading__CancellationToken____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____System__Threading__CancellationToken____c& operator=(____System__Threading__CancellationToken____c&& o) noexcept = default;
  constexpr ____System__Threading__CancellationToken____c& operator=(____System__Threading__CancellationToken____c const& o) noexcept = default;
                


// Fields

static ::System::Threading::____System__Threading__CancellationToken____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(::System::Threading::____System__Threading__CancellationToken____c value) ;

static ::System::Threading::____System__Threading__CancellationToken____c __get___9() ;


// Methods

// Ctor Parameters []
explicit ____System__Threading__CancellationToken____c() ;

/// @brief Method .ctor addr 0x24a38ac size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <.cctor>b__26_0 addr 0x24a38b4 size 0x6c virtual false final false
 void __cctor_b__26_0(::bs_hook::Il2CppWrapperType obj) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading
// Type: System.Threading::CancellationToken
namespace System::Threading {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2676))
// CS Name: System.Threading.CancellationToken
struct CORDL_TYPE CancellationToken : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using __c = ::System::Threading::____System__Threading__CancellationToken____c;

// Ctor Parameters [CppParam { name: "_source", ty: "::System::Threading::CancellationTokenSource", modifiers: "", def_value: None }]
constexpr CancellationToken(::System::Threading::CancellationTokenSource _source) noexcept;


                    constexpr CancellationToken(CancellationToken const&) = default;
                    constexpr CancellationToken(CancellationToken&&) = default;
                    constexpr CancellationToken& operator=(CancellationToken const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr CancellationToken& operator=(CancellationToken&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit CancellationToken(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::System::Threading::CancellationTokenSource __declspec(property(get=__get__source, put=__set__source))  _source;

constexpr void __set__source(::System::Threading::CancellationTokenSource value) ;

constexpr ::System::Threading::CancellationTokenSource __get__source() const;

static ::System::Action_1<::bs_hook::Il2CppWrapperType> __declspec(property(get=__get_s_actionToActionObjShunt, put=__set_s_actionToActionObjShunt))  s_actionToActionObjShunt;

static void __set_s_actionToActionObjShunt(::System::Action_1<::bs_hook::Il2CppWrapperType> value) ;

static ::System::Action_1<::bs_hook::Il2CppWrapperType> __get_s_actionToActionObjShunt() ;


// Properties

static ::System::Threading::CancellationToken __declspec(property(get=get_None))  None;

 bool __declspec(property(get=get_IsCancellationRequested))  IsCancellationRequested;

 bool __declspec(property(get=get_CanBeCanceled))  CanBeCanceled;


// Methods

/// @brief Method get_None addr 0x24a2f2c size 0x8 virtual false final false
static ::System::Threading::CancellationToken get_None() ;

/// @brief Method get_IsCancellationRequested addr 0x24a2f34 size 0x2c virtual false final false
 bool get_IsCancellationRequested() ;

/// @brief Method get_CanBeCanceled addr 0x24a2f7c size 0x10 virtual false final false
 bool get_CanBeCanceled() ;

/// @brief Method .ctor addr 0x24a2f8c size 0x8 virtual false final false
 void _ctor(::System::Threading::CancellationTokenSource source) ;

/// @brief Method .ctor addr 0x24a2f94 size 0x74 virtual false final false
 void _ctor(bool canceled) ;

/// @brief Method Register addr 0x24a3008 size 0xec virtual false final false
 ::System::Threading::CancellationTokenRegistration Register(::System::Action callback) ;

/// @brief Method Register addr 0x24a3224 size 0x38 virtual false final false
 ::System::Threading::CancellationTokenRegistration Register(::System::Action_1<::bs_hook::Il2CppWrapperType> callback, ::bs_hook::Il2CppWrapperType state) ;

/// @brief Method InternalRegisterWithoutEC addr 0x24a325c size 0x38 virtual false final false
 ::System::Threading::CancellationTokenRegistration InternalRegisterWithoutEC(::System::Action_1<::bs_hook::Il2CppWrapperType> callback, ::bs_hook::Il2CppWrapperType state) ;

/// @brief Method Register addr 0x24a30f4 size 0x130 virtual false final false
 ::System::Threading::CancellationTokenRegistration Register(::System::Action_1<::bs_hook::Il2CppWrapperType> callback, ::bs_hook::Il2CppWrapperType state, bool useSynchronizationContext, bool useExecutionContext) ;

/// @brief Method Equals addr 0x24a35dc size 0x10 virtual false final false
 bool Equals(::System::Threading::CancellationToken other) ;

/// @brief Method Equals addr 0x24a35ec size 0x78 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType other) ;

/// @brief Method GetHashCode addr 0x24a3664 size 0x74 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method op_Equality addr 0x24a36d8 size 0xc virtual false final false
static bool op_Equality(::System::Threading::CancellationToken left, ::System::Threading::CancellationToken right) ;

/// @brief Method op_Inequality addr 0x24a36e4 size 0xc virtual false final false
static bool op_Inequality(::System::Threading::CancellationToken left, ::System::Threading::CancellationToken right) ;

/// @brief Method ThrowIfCancellationRequested addr 0x24a36f0 size 0x38 virtual false final false
 void ThrowIfCancellationRequested() ;

/// @brief Method ThrowOperationCanceledException addr 0x24a3728 size 0x5c virtual false final false
 void ThrowOperationCanceledException() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Threading
} // end anonymous namespace
NEED_NO_BOX(::System::Threading::____System__Threading__CancellationToken____c);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::____System__Threading__CancellationToken____c, "System.Threading", "CancellationToken/<>c");
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::CancellationToken, "System.Threading", "CancellationToken");
