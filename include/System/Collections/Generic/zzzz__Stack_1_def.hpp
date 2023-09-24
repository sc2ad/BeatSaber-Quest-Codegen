#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
namespace System::Collections {
class ICollection;
}
namespace System::Collections::Generic {
template<typename T>
struct System__Collections__Generic__Stack_1__Enumerator;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyCollection_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System {
class Array;
}
namespace System {
struct Int32Enum;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Xml::Schema {
struct System__Xml__Schema__SequenceNode__SequenceConstructPosContext;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine::UIElements::StyleSheets {
struct UnityEngine__UIElements__StyleSheets__BaseStyleMatcher__MatchContext;
}
namespace UnityEngine::UIElements {
struct TextureId;
}
namespace UnityEngine::UIElements {
struct UnityEngine__UIElements__EventDispatcher__DispatchContext;
}
namespace UnityEngine::UIElements {
struct UnityEngine__UIElements__StyleVariableResolver__ResolveContext;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace System::Collections::Generic {
template<typename T>
class Stack_1;
}
namespace System::Collections::Generic {
template<>
class Stack_1<System::Int32Enum>;
}
namespace System::Collections::Generic {
template<>
class Stack_1<System::Xml::Schema::System__Xml__Schema__SequenceNode__SequenceConstructPosContext>;
}
namespace System::Collections::Generic {
template<::cordl_internals::is_or_is_backed_by<int32_t> T>
class Stack_1<T>;
}
namespace System::Collections::Generic {
template<::cordl_internals::il2cpp_reference_type T>
class Stack_1<T>;
}
namespace System::Collections::Generic {
template<>
class Stack_1<UnityEngine::Matrix4x4>;
}
namespace System::Collections::Generic {
template<>
class Stack_1<UnityEngine::Rect>;
}
namespace System::Collections::Generic {
template<>
class Stack_1<UnityEngine::UIElements::StyleSheets::UnityEngine__UIElements__StyleSheets__BaseStyleMatcher__MatchContext>;
}
namespace System::Collections::Generic {
template<>
class Stack_1<UnityEngine::UIElements::TextureId>;
}
namespace System::Collections::Generic {
template<>
class Stack_1<UnityEngine::UIElements::UnityEngine__UIElements__EventDispatcher__DispatchContext>;
}
namespace System::Collections::Generic {
template<>
class Stack_1<UnityEngine::UIElements::UnityEngine__UIElements__StyleVariableResolver__ResolveContext>;
}
namespace System::Collections::Generic {
template<typename T>
struct System__Collections__Generic__Stack_1__Enumerator;
}
namespace System::Collections::Generic {
template<>
struct System__Collections__Generic__Stack_1__Enumerator<System::Int32Enum>;
}
namespace System::Collections::Generic {
template<>
struct System__Collections__Generic__Stack_1__Enumerator<System::Xml::Schema::System__Xml__Schema__SequenceNode__SequenceConstructPosContext>;
}
namespace System::Collections::Generic {
template<::cordl_internals::is_or_is_backed_by<int32_t> T>
struct System__Collections__Generic__Stack_1__Enumerator<T>;
}
namespace System::Collections::Generic {
template<::cordl_internals::il2cpp_reference_type T>
struct System__Collections__Generic__Stack_1__Enumerator<T>;
}
namespace System::Collections::Generic {
template<>
struct System__Collections__Generic__Stack_1__Enumerator<UnityEngine::Matrix4x4>;
}
namespace System::Collections::Generic {
template<>
struct System__Collections__Generic__Stack_1__Enumerator<UnityEngine::Rect>;
}
namespace System::Collections::Generic {
template<>
struct System__Collections__Generic__Stack_1__Enumerator<UnityEngine::UIElements::StyleSheets::UnityEngine__UIElements__StyleSheets__BaseStyleMatcher__MatchContext>;
}
namespace System::Collections::Generic {
template<>
struct System__Collections__Generic__Stack_1__Enumerator<UnityEngine::UIElements::TextureId>;
}
namespace System::Collections::Generic {
template<>
struct System__Collections__Generic__Stack_1__Enumerator<UnityEngine::UIElements::UnityEngine__UIElements__EventDispatcher__DispatchContext>;
}
namespace System::Collections::Generic {
template<>
struct System__Collections__Generic__Stack_1__Enumerator<UnityEngine::UIElements::UnityEngine__UIElements__StyleVariableResolver__ResolveContext>;
}
// Type: ::Enumerator
// Type: System.Collections.Generic::Stack`1
// Type: ::Enumerator
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3840)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3840), inst: 5866 })
// CS Name: System.Collections.Generic.Stack`1::Enumerator
struct CORDL_TYPE System__Collections__Generic__Stack_1__Enumerator<System::Xml::Schema::System__Xml__Schema__SequenceNode__SequenceConstructPosContext> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<System::Xml::Schema::System__Xml__Schema__SequenceNode__SequenceConstructPosContext>
constexpr operator  System::Collections::Generic::IEnumerator_1<System::Xml::Schema::System__Xml__Schema__SequenceNode__SequenceConstructPosContext>() const;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const;

// Ctor Parameters [CppParam { name: "_stack", ty: "System::Collections::Generic::Stack_1<System::Xml::Schema::System__Xml__Schema__SequenceNode__SequenceConstructPosContext>", modifiers: "", def_value: None }, CppParam { name: "_version", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_currentElement", ty: "System::Xml::Schema::System__Xml__Schema__SequenceNode__SequenceConstructPosContext", modifiers: "", def_value: None }]
constexpr System__Collections__Generic__Stack_1__Enumerator(System::Collections::Generic::Stack_1<System::Xml::Schema::System__Xml__Schema__SequenceNode__SequenceConstructPosContext> _stack, int32_t _version, int32_t _index, System::Xml::Schema::System__Xml__Schema__SequenceNode__SequenceConstructPosContext _currentElement) noexcept;


                    constexpr System__Collections__Generic__Stack_1__Enumerator(System__Collections__Generic__Stack_1__Enumerator const&) = default;
                    constexpr System__Collections__Generic__Stack_1__Enumerator(System__Collections__Generic__Stack_1__Enumerator&&) = default;
                    constexpr System__Collections__Generic__Stack_1__Enumerator& operator=(System__Collections__Generic__Stack_1__Enumerator const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr System__Collections__Generic__Stack_1__Enumerator& operator=(System__Collections__Generic__Stack_1__Enumerator&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x20};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit System__Collections__Generic__Stack_1__Enumerator(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 System::Collections::Generic::Stack_1<System::Xml::Schema::System__Xml__Schema__SequenceNode__SequenceConstructPosContext> __declspec(property(get=__get__stack, put=__set__stack))  _stack;

constexpr void __set__stack(System::Collections::Generic::Stack_1<System::Xml::Schema::System__Xml__Schema__SequenceNode__SequenceConstructPosContext> value) ;

constexpr System::Collections::Generic::Stack_1<System::Xml::Schema::System__Xml__Schema__SequenceNode__SequenceConstructPosContext> __get__stack() const;

 int32_t __declspec(property(get=__get__version, put=__set__version))  _version;

constexpr void __set__version(int32_t value) ;

constexpr int32_t __get__version() const;

 int32_t __declspec(property(get=__get__index, put=__set__index))  _index;

constexpr void __set__index(int32_t value) ;

constexpr int32_t __get__index() const;

 System::Xml::Schema::System__Xml__Schema__SequenceNode__SequenceConstructPosContext __declspec(property(get=__get__currentElement, put=__set__currentElement))  _currentElement;

constexpr void __set__currentElement(System::Xml::Schema::System__Xml__Schema__SequenceNode__SequenceConstructPosContext value) ;

constexpr System::Xml::Schema::System__Xml__Schema__SequenceNode__SequenceConstructPosContext __get__currentElement() const;


// Properties

 System::Xml::Schema::System__Xml__Schema__SequenceNode__SequenceConstructPosContext __declspec(property(get=get_Current))  Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Collections::Generic::Stack_1<System::Xml::Schema::System__Xml__Schema__SequenceNode__SequenceConstructPosContext> stack) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
 bool MoveNext() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Xml::Schema::System__Xml__Schema__SequenceNode__SequenceConstructPosContext get_Current() ;

/// @brief Method ThrowEnumerationNotStartedOrEnded addr 0x0 size 0xffffffffffffffff virtual false final false
 void ThrowEnumerationNotStartedOrEnded() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_Collections_IEnumerator_Reset() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: ::Enumerator
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3840)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3840), inst: 4862 })
// CS Name: System.Collections.Generic.Stack`1::Enumerator
struct CORDL_TYPE System__Collections__Generic__Stack_1__Enumerator<UnityEngine::UIElements::UnityEngine__UIElements__StyleVariableResolver__ResolveContext> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<UnityEngine::UIElements::UnityEngine__UIElements__StyleVariableResolver__ResolveContext>
constexpr operator  System::Collections::Generic::IEnumerator_1<UnityEngine::UIElements::UnityEngine__UIElements__StyleVariableResolver__ResolveContext>() const;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const;

// Ctor Parameters [CppParam { name: "_stack", ty: "System::Collections::Generic::Stack_1<UnityEngine::UIElements::UnityEngine__UIElements__StyleVariableResolver__ResolveContext>", modifiers: "", def_value: None }, CppParam { name: "_version", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_currentElement", ty: "UnityEngine::UIElements::UnityEngine__UIElements__StyleVariableResolver__ResolveContext", modifiers: "", def_value: None }]
constexpr System__Collections__Generic__Stack_1__Enumerator(System::Collections::Generic::Stack_1<UnityEngine::UIElements::UnityEngine__UIElements__StyleVariableResolver__ResolveContext> _stack, int32_t _version, int32_t _index, UnityEngine::UIElements::UnityEngine__UIElements__StyleVariableResolver__ResolveContext _currentElement) noexcept;


                    constexpr System__Collections__Generic__Stack_1__Enumerator(System__Collections__Generic__Stack_1__Enumerator const&) = default;
                    constexpr System__Collections__Generic__Stack_1__Enumerator(System__Collections__Generic__Stack_1__Enumerator&&) = default;
                    constexpr System__Collections__Generic__Stack_1__Enumerator& operator=(System__Collections__Generic__Stack_1__Enumerator const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr System__Collections__Generic__Stack_1__Enumerator& operator=(System__Collections__Generic__Stack_1__Enumerator&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x20};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit System__Collections__Generic__Stack_1__Enumerator(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 System::Collections::Generic::Stack_1<UnityEngine::UIElements::UnityEngine__UIElements__StyleVariableResolver__ResolveContext> __declspec(property(get=__get__stack, put=__set__stack))  _stack;

constexpr void __set__stack(System::Collections::Generic::Stack_1<UnityEngine::UIElements::UnityEngine__UIElements__StyleVariableResolver__ResolveContext> value) ;

constexpr System::Collections::Generic::Stack_1<UnityEngine::UIElements::UnityEngine__UIElements__StyleVariableResolver__ResolveContext> __get__stack() const;

 int32_t __declspec(property(get=__get__version, put=__set__version))  _version;

constexpr void __set__version(int32_t value) ;

constexpr int32_t __get__version() const;

 int32_t __declspec(property(get=__get__index, put=__set__index))  _index;

constexpr void __set__index(int32_t value) ;

constexpr int32_t __get__index() const;

 UnityEngine::UIElements::UnityEngine__UIElements__StyleVariableResolver__ResolveContext __declspec(property(get=__get__currentElement, put=__set__currentElement))  _currentElement;

constexpr void __set__currentElement(UnityEngine::UIElements::UnityEngine__UIElements__StyleVariableResolver__ResolveContext value) ;

constexpr UnityEngine::UIElements::UnityEngine__UIElements__StyleVariableResolver__ResolveContext __get__currentElement() const;


// Properties

 UnityEngine::UIElements::UnityEngine__UIElements__StyleVariableResolver__ResolveContext __declspec(property(get=get_Current))  Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Collections::Generic::Stack_1<UnityEngine::UIElements::UnityEngine__UIElements__StyleVariableResolver__ResolveContext> stack) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
 bool MoveNext() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 UnityEngine::UIElements::UnityEngine__UIElements__StyleVariableResolver__ResolveContext get_Current() ;

/// @brief Method ThrowEnumerationNotStartedOrEnded addr 0x0 size 0xffffffffffffffff virtual false final false
 void ThrowEnumerationNotStartedOrEnded() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_Collections_IEnumerator_Reset() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: ::Enumerator
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3840)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3840), inst: 4861 })
// CS Name: System.Collections.Generic.Stack`1::Enumerator
struct CORDL_TYPE System__Collections__Generic__Stack_1__Enumerator<UnityEngine::UIElements::UnityEngine__UIElements__EventDispatcher__DispatchContext> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<UnityEngine::UIElements::UnityEngine__UIElements__EventDispatcher__DispatchContext>
constexpr operator  System::Collections::Generic::IEnumerator_1<UnityEngine::UIElements::UnityEngine__UIElements__EventDispatcher__DispatchContext>() const;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const;

// Ctor Parameters [CppParam { name: "_stack", ty: "System::Collections::Generic::Stack_1<UnityEngine::UIElements::UnityEngine__UIElements__EventDispatcher__DispatchContext>", modifiers: "", def_value: None }, CppParam { name: "_version", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_currentElement", ty: "UnityEngine::UIElements::UnityEngine__UIElements__EventDispatcher__DispatchContext", modifiers: "", def_value: None }]
constexpr System__Collections__Generic__Stack_1__Enumerator(System::Collections::Generic::Stack_1<UnityEngine::UIElements::UnityEngine__UIElements__EventDispatcher__DispatchContext> _stack, int32_t _version, int32_t _index, UnityEngine::UIElements::UnityEngine__UIElements__EventDispatcher__DispatchContext _currentElement) noexcept;


                    constexpr System__Collections__Generic__Stack_1__Enumerator(System__Collections__Generic__Stack_1__Enumerator const&) = default;
                    constexpr System__Collections__Generic__Stack_1__Enumerator(System__Collections__Generic__Stack_1__Enumerator&&) = default;
                    constexpr System__Collections__Generic__Stack_1__Enumerator& operator=(System__Collections__Generic__Stack_1__Enumerator const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr System__Collections__Generic__Stack_1__Enumerator& operator=(System__Collections__Generic__Stack_1__Enumerator&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x20};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit System__Collections__Generic__Stack_1__Enumerator(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 System::Collections::Generic::Stack_1<UnityEngine::UIElements::UnityEngine__UIElements__EventDispatcher__DispatchContext> __declspec(property(get=__get__stack, put=__set__stack))  _stack;

constexpr void __set__stack(System::Collections::Generic::Stack_1<UnityEngine::UIElements::UnityEngine__UIElements__EventDispatcher__DispatchContext> value) ;

constexpr System::Collections::Generic::Stack_1<UnityEngine::UIElements::UnityEngine__UIElements__EventDispatcher__DispatchContext> __get__stack() const;

 int32_t __declspec(property(get=__get__version, put=__set__version))  _version;

constexpr void __set__version(int32_t value) ;

constexpr int32_t __get__version() const;

 int32_t __declspec(property(get=__get__index, put=__set__index))  _index;

constexpr void __set__index(int32_t value) ;

constexpr int32_t __get__index() const;

 UnityEngine::UIElements::UnityEngine__UIElements__EventDispatcher__DispatchContext __declspec(property(get=__get__currentElement, put=__set__currentElement))  _currentElement;

constexpr void __set__currentElement(UnityEngine::UIElements::UnityEngine__UIElements__EventDispatcher__DispatchContext value) ;

constexpr UnityEngine::UIElements::UnityEngine__UIElements__EventDispatcher__DispatchContext __get__currentElement() const;


// Properties

 UnityEngine::UIElements::UnityEngine__UIElements__EventDispatcher__DispatchContext __declspec(property(get=get_Current))  Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Collections::Generic::Stack_1<UnityEngine::UIElements::UnityEngine__UIElements__EventDispatcher__DispatchContext> stack) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
 bool MoveNext() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 UnityEngine::UIElements::UnityEngine__UIElements__EventDispatcher__DispatchContext get_Current() ;

/// @brief Method ThrowEnumerationNotStartedOrEnded addr 0x0 size 0xffffffffffffffff virtual false final false
 void ThrowEnumerationNotStartedOrEnded() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_Collections_IEnumerator_Reset() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: ::Enumerator
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(3840))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3840), inst: 4860 })
// CS Name: System.Collections.Generic.Stack`1::Enumerator
struct CORDL_TYPE System__Collections__Generic__Stack_1__Enumerator<UnityEngine::UIElements::StyleSheets::UnityEngine__UIElements__StyleSheets__BaseStyleMatcher__MatchContext> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<UnityEngine::UIElements::StyleSheets::UnityEngine__UIElements__StyleSheets__BaseStyleMatcher__MatchContext>
constexpr operator  System::Collections::Generic::IEnumerator_1<UnityEngine::UIElements::StyleSheets::UnityEngine__UIElements__StyleSheets__BaseStyleMatcher__MatchContext>() const;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const;

// Ctor Parameters [CppParam { name: "_stack", ty: "System::Collections::Generic::Stack_1<UnityEngine::UIElements::StyleSheets::UnityEngine__UIElements__StyleSheets__BaseStyleMatcher__MatchContext>", modifiers: "", def_value: None }, CppParam { name: "_version", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_currentElement", ty: "UnityEngine::UIElements::StyleSheets::UnityEngine__UIElements__StyleSheets__BaseStyleMatcher__MatchContext", modifiers: "", def_value: None }]
constexpr System__Collections__Generic__Stack_1__Enumerator(System::Collections::Generic::Stack_1<UnityEngine::UIElements::StyleSheets::UnityEngine__UIElements__StyleSheets__BaseStyleMatcher__MatchContext> _stack, int32_t _version, int32_t _index, UnityEngine::UIElements::StyleSheets::UnityEngine__UIElements__StyleSheets__BaseStyleMatcher__MatchContext _currentElement) noexcept;


                    constexpr System__Collections__Generic__Stack_1__Enumerator(System__Collections__Generic__Stack_1__Enumerator const&) = default;
                    constexpr System__Collections__Generic__Stack_1__Enumerator(System__Collections__Generic__Stack_1__Enumerator&&) = default;
                    constexpr System__Collections__Generic__Stack_1__Enumerator& operator=(System__Collections__Generic__Stack_1__Enumerator const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr System__Collections__Generic__Stack_1__Enumerator& operator=(System__Collections__Generic__Stack_1__Enumerator&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x20};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit System__Collections__Generic__Stack_1__Enumerator(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 System::Collections::Generic::Stack_1<UnityEngine::UIElements::StyleSheets::UnityEngine__UIElements__StyleSheets__BaseStyleMatcher__MatchContext> __declspec(property(get=__get__stack, put=__set__stack))  _stack;

constexpr void __set__stack(System::Collections::Generic::Stack_1<UnityEngine::UIElements::StyleSheets::UnityEngine__UIElements__StyleSheets__BaseStyleMatcher__MatchContext> value) ;

constexpr System::Collections::Generic::Stack_1<UnityEngine::UIElements::StyleSheets::UnityEngine__UIElements__StyleSheets__BaseStyleMatcher__MatchContext> __get__stack() const;

 int32_t __declspec(property(get=__get__version, put=__set__version))  _version;

constexpr void __set__version(int32_t value) ;

constexpr int32_t __get__version() const;

 int32_t __declspec(property(get=__get__index, put=__set__index))  _index;

constexpr void __set__index(int32_t value) ;

constexpr int32_t __get__index() const;

 UnityEngine::UIElements::StyleSheets::UnityEngine__UIElements__StyleSheets__BaseStyleMatcher__MatchContext __declspec(property(get=__get__currentElement, put=__set__currentElement))  _currentElement;

constexpr void __set__currentElement(UnityEngine::UIElements::StyleSheets::UnityEngine__UIElements__StyleSheets__BaseStyleMatcher__MatchContext value) ;

constexpr UnityEngine::UIElements::StyleSheets::UnityEngine__UIElements__StyleSheets__BaseStyleMatcher__MatchContext __get__currentElement() const;


// Properties

 UnityEngine::UIElements::StyleSheets::UnityEngine__UIElements__StyleSheets__BaseStyleMatcher__MatchContext __declspec(property(get=get_Current))  Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Collections::Generic::Stack_1<UnityEngine::UIElements::StyleSheets::UnityEngine__UIElements__StyleSheets__BaseStyleMatcher__MatchContext> stack) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
 bool MoveNext() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 UnityEngine::UIElements::StyleSheets::UnityEngine__UIElements__StyleSheets__BaseStyleMatcher__MatchContext get_Current() ;

/// @brief Method ThrowEnumerationNotStartedOrEnded addr 0x0 size 0xffffffffffffffff virtual false final false
 void ThrowEnumerationNotStartedOrEnded() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_Collections_IEnumerator_Reset() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: ::Enumerator
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(3840))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3840), inst: 4859 })
// CS Name: System.Collections.Generic.Stack`1::Enumerator
struct CORDL_TYPE System__Collections__Generic__Stack_1__Enumerator<UnityEngine::UIElements::TextureId> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<UnityEngine::UIElements::TextureId>
constexpr operator  System::Collections::Generic::IEnumerator_1<UnityEngine::UIElements::TextureId>() const;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const;

// Ctor Parameters [CppParam { name: "_stack", ty: "System::Collections::Generic::Stack_1<UnityEngine::UIElements::TextureId>", modifiers: "", def_value: None }, CppParam { name: "_version", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_currentElement", ty: "UnityEngine::UIElements::TextureId", modifiers: "", def_value: None }]
constexpr System__Collections__Generic__Stack_1__Enumerator(System::Collections::Generic::Stack_1<UnityEngine::UIElements::TextureId> _stack, int32_t _version, int32_t _index, UnityEngine::UIElements::TextureId _currentElement) noexcept;


                    constexpr System__Collections__Generic__Stack_1__Enumerator(System__Collections__Generic__Stack_1__Enumerator const&) = default;
                    constexpr System__Collections__Generic__Stack_1__Enumerator(System__Collections__Generic__Stack_1__Enumerator&&) = default;
                    constexpr System__Collections__Generic__Stack_1__Enumerator& operator=(System__Collections__Generic__Stack_1__Enumerator const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr System__Collections__Generic__Stack_1__Enumerator& operator=(System__Collections__Generic__Stack_1__Enumerator&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x20};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit System__Collections__Generic__Stack_1__Enumerator(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 System::Collections::Generic::Stack_1<UnityEngine::UIElements::TextureId> __declspec(property(get=__get__stack, put=__set__stack))  _stack;

constexpr void __set__stack(System::Collections::Generic::Stack_1<UnityEngine::UIElements::TextureId> value) ;

constexpr System::Collections::Generic::Stack_1<UnityEngine::UIElements::TextureId> __get__stack() const;

 int32_t __declspec(property(get=__get__version, put=__set__version))  _version;

constexpr void __set__version(int32_t value) ;

constexpr int32_t __get__version() const;

 int32_t __declspec(property(get=__get__index, put=__set__index))  _index;

constexpr void __set__index(int32_t value) ;

constexpr int32_t __get__index() const;

 UnityEngine::UIElements::TextureId __declspec(property(get=__get__currentElement, put=__set__currentElement))  _currentElement;

constexpr void __set__currentElement(UnityEngine::UIElements::TextureId value) ;

constexpr UnityEngine::UIElements::TextureId __get__currentElement() const;


// Properties

 UnityEngine::UIElements::TextureId __declspec(property(get=get_Current))  Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Collections::Generic::Stack_1<UnityEngine::UIElements::TextureId> stack) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
 bool MoveNext() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 UnityEngine::UIElements::TextureId get_Current() ;

/// @brief Method ThrowEnumerationNotStartedOrEnded addr 0x0 size 0xffffffffffffffff virtual false final false
 void ThrowEnumerationNotStartedOrEnded() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_Collections_IEnumerator_Reset() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: ::Enumerator
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3840)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3840), inst: 4825 })
// CS Name: System.Collections.Generic.Stack`1::Enumerator
struct CORDL_TYPE System__Collections__Generic__Stack_1__Enumerator<System::Int32Enum> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<System::Int32Enum>
constexpr operator  System::Collections::Generic::IEnumerator_1<System::Int32Enum>() const;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const;

// Ctor Parameters [CppParam { name: "_stack", ty: "System::Collections::Generic::Stack_1<System::Int32Enum>", modifiers: "", def_value: None }, CppParam { name: "_version", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_currentElement", ty: "System::Int32Enum", modifiers: "", def_value: None }]
constexpr System__Collections__Generic__Stack_1__Enumerator(System::Collections::Generic::Stack_1<System::Int32Enum> _stack, int32_t _version, int32_t _index, System::Int32Enum _currentElement) noexcept;


                    constexpr System__Collections__Generic__Stack_1__Enumerator(System__Collections__Generic__Stack_1__Enumerator const&) = default;
                    constexpr System__Collections__Generic__Stack_1__Enumerator(System__Collections__Generic__Stack_1__Enumerator&&) = default;
                    constexpr System__Collections__Generic__Stack_1__Enumerator& operator=(System__Collections__Generic__Stack_1__Enumerator const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr System__Collections__Generic__Stack_1__Enumerator& operator=(System__Collections__Generic__Stack_1__Enumerator&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x20};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit System__Collections__Generic__Stack_1__Enumerator(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 System::Collections::Generic::Stack_1<System::Int32Enum> __declspec(property(get=__get__stack, put=__set__stack))  _stack;

constexpr void __set__stack(System::Collections::Generic::Stack_1<System::Int32Enum> value) ;

constexpr System::Collections::Generic::Stack_1<System::Int32Enum> __get__stack() const;

 int32_t __declspec(property(get=__get__version, put=__set__version))  _version;

constexpr void __set__version(int32_t value) ;

constexpr int32_t __get__version() const;

 int32_t __declspec(property(get=__get__index, put=__set__index))  _index;

constexpr void __set__index(int32_t value) ;

constexpr int32_t __get__index() const;

 System::Int32Enum __declspec(property(get=__get__currentElement, put=__set__currentElement))  _currentElement;

constexpr void __set__currentElement(System::Int32Enum value) ;

constexpr System::Int32Enum __get__currentElement() const;


// Properties

 System::Int32Enum __declspec(property(get=get_Current))  Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Collections::Generic::Stack_1<System::Int32Enum> stack) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
 bool MoveNext() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Int32Enum get_Current() ;

/// @brief Method ThrowEnumerationNotStartedOrEnded addr 0x0 size 0xffffffffffffffff virtual false final false
 void ThrowEnumerationNotStartedOrEnded() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_Collections_IEnumerator_Reset() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: ::Enumerator
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3840)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3840), inst: 3225 })
// CS Name: System.Collections.Generic.Stack`1::Enumerator
struct CORDL_TYPE System__Collections__Generic__Stack_1__Enumerator<UnityEngine::Rect> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<UnityEngine::Rect>
constexpr operator  System::Collections::Generic::IEnumerator_1<UnityEngine::Rect>() const;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const;

// Ctor Parameters [CppParam { name: "_stack", ty: "System::Collections::Generic::Stack_1<UnityEngine::Rect>", modifiers: "", def_value: None }, CppParam { name: "_version", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_currentElement", ty: "UnityEngine::Rect", modifiers: "", def_value: None }]
constexpr System__Collections__Generic__Stack_1__Enumerator(System::Collections::Generic::Stack_1<UnityEngine::Rect> _stack, int32_t _version, int32_t _index, UnityEngine::Rect _currentElement) noexcept;


                    constexpr System__Collections__Generic__Stack_1__Enumerator(System__Collections__Generic__Stack_1__Enumerator const&) = default;
                    constexpr System__Collections__Generic__Stack_1__Enumerator(System__Collections__Generic__Stack_1__Enumerator&&) = default;
                    constexpr System__Collections__Generic__Stack_1__Enumerator& operator=(System__Collections__Generic__Stack_1__Enumerator const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr System__Collections__Generic__Stack_1__Enumerator& operator=(System__Collections__Generic__Stack_1__Enumerator&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x20};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit System__Collections__Generic__Stack_1__Enumerator(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 System::Collections::Generic::Stack_1<UnityEngine::Rect> __declspec(property(get=__get__stack, put=__set__stack))  _stack;

constexpr void __set__stack(System::Collections::Generic::Stack_1<UnityEngine::Rect> value) ;

constexpr System::Collections::Generic::Stack_1<UnityEngine::Rect> __get__stack() const;

 int32_t __declspec(property(get=__get__version, put=__set__version))  _version;

constexpr void __set__version(int32_t value) ;

constexpr int32_t __get__version() const;

 int32_t __declspec(property(get=__get__index, put=__set__index))  _index;

constexpr void __set__index(int32_t value) ;

constexpr int32_t __get__index() const;

 UnityEngine::Rect __declspec(property(get=__get__currentElement, put=__set__currentElement))  _currentElement;

constexpr void __set__currentElement(UnityEngine::Rect value) ;

constexpr UnityEngine::Rect __get__currentElement() const;


// Properties

 UnityEngine::Rect __declspec(property(get=get_Current))  Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Collections::Generic::Stack_1<UnityEngine::Rect> stack) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
 bool MoveNext() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 UnityEngine::Rect get_Current() ;

/// @brief Method ThrowEnumerationNotStartedOrEnded addr 0x0 size 0xffffffffffffffff virtual false final false
 void ThrowEnumerationNotStartedOrEnded() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_Collections_IEnumerator_Reset() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: ::Enumerator
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3840)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3840), inst: 3205 })
// CS Name: System.Collections.Generic.Stack`1::Enumerator
struct CORDL_TYPE System__Collections__Generic__Stack_1__Enumerator<UnityEngine::Matrix4x4> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<UnityEngine::Matrix4x4>
constexpr operator  System::Collections::Generic::IEnumerator_1<UnityEngine::Matrix4x4>() const;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const;

// Ctor Parameters [CppParam { name: "_stack", ty: "System::Collections::Generic::Stack_1<UnityEngine::Matrix4x4>", modifiers: "", def_value: None }, CppParam { name: "_version", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_currentElement", ty: "UnityEngine::Matrix4x4", modifiers: "", def_value: None }]
constexpr System__Collections__Generic__Stack_1__Enumerator(System::Collections::Generic::Stack_1<UnityEngine::Matrix4x4> _stack, int32_t _version, int32_t _index, UnityEngine::Matrix4x4 _currentElement) noexcept;


                    constexpr System__Collections__Generic__Stack_1__Enumerator(System__Collections__Generic__Stack_1__Enumerator const&) = default;
                    constexpr System__Collections__Generic__Stack_1__Enumerator(System__Collections__Generic__Stack_1__Enumerator&&) = default;
                    constexpr System__Collections__Generic__Stack_1__Enumerator& operator=(System__Collections__Generic__Stack_1__Enumerator const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr System__Collections__Generic__Stack_1__Enumerator& operator=(System__Collections__Generic__Stack_1__Enumerator&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x20};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit System__Collections__Generic__Stack_1__Enumerator(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 System::Collections::Generic::Stack_1<UnityEngine::Matrix4x4> __declspec(property(get=__get__stack, put=__set__stack))  _stack;

constexpr void __set__stack(System::Collections::Generic::Stack_1<UnityEngine::Matrix4x4> value) ;

constexpr System::Collections::Generic::Stack_1<UnityEngine::Matrix4x4> __get__stack() const;

 int32_t __declspec(property(get=__get__version, put=__set__version))  _version;

constexpr void __set__version(int32_t value) ;

constexpr int32_t __get__version() const;

 int32_t __declspec(property(get=__get__index, put=__set__index))  _index;

constexpr void __set__index(int32_t value) ;

constexpr int32_t __get__index() const;

 UnityEngine::Matrix4x4 __declspec(property(get=__get__currentElement, put=__set__currentElement))  _currentElement;

constexpr void __set__currentElement(UnityEngine::Matrix4x4 value) ;

constexpr UnityEngine::Matrix4x4 __get__currentElement() const;


// Properties

 UnityEngine::Matrix4x4 __declspec(property(get=get_Current))  Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Collections::Generic::Stack_1<UnityEngine::Matrix4x4> stack) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
 bool MoveNext() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 UnityEngine::Matrix4x4 get_Current() ;

/// @brief Method ThrowEnumerationNotStartedOrEnded addr 0x0 size 0xffffffffffffffff virtual false final false
 void ThrowEnumerationNotStartedOrEnded() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_Collections_IEnumerator_Reset() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: ::Enumerator
namespace System::Collections::Generic {
// cpp template
template<::cordl_internals::is_or_is_backed_by<int32_t> T>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3840)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3840), inst: 92 })
// CS Name: System.Collections.Generic.Stack`1::Enumerator
struct CORDL_TYPE System__Collections__Generic__Stack_1__Enumerator<T> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<T>
constexpr operator  System::Collections::Generic::IEnumerator_1<T>() const;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const;

// Ctor Parameters [CppParam { name: "_stack", ty: "System::Collections::Generic::Stack_1<T>", modifiers: "", def_value: None }, CppParam { name: "_version", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_currentElement", ty: "T", modifiers: "", def_value: None }]
constexpr System__Collections__Generic__Stack_1__Enumerator(System::Collections::Generic::Stack_1<T> _stack, int32_t _version, int32_t _index, T _currentElement) noexcept;


                    constexpr System__Collections__Generic__Stack_1__Enumerator(System__Collections__Generic__Stack_1__Enumerator const&) = default;
                    constexpr System__Collections__Generic__Stack_1__Enumerator(System__Collections__Generic__Stack_1__Enumerator&&) = default;
                    constexpr System__Collections__Generic__Stack_1__Enumerator& operator=(System__Collections__Generic__Stack_1__Enumerator const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr System__Collections__Generic__Stack_1__Enumerator& operator=(System__Collections__Generic__Stack_1__Enumerator&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x20};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit System__Collections__Generic__Stack_1__Enumerator(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 System::Collections::Generic::Stack_1<T> __declspec(property(get=__get__stack, put=__set__stack))  _stack;

constexpr void __set__stack(System::Collections::Generic::Stack_1<T> value) ;

constexpr System::Collections::Generic::Stack_1<T> __get__stack() const;

 int32_t __declspec(property(get=__get__version, put=__set__version))  _version;

constexpr void __set__version(int32_t value) ;

constexpr int32_t __get__version() const;

 int32_t __declspec(property(get=__get__index, put=__set__index))  _index;

constexpr void __set__index(int32_t value) ;

constexpr int32_t __get__index() const;

 T __declspec(property(get=__get__currentElement, put=__set__currentElement))  _currentElement;

constexpr void __set__currentElement(T value) ;

constexpr T __get__currentElement() const;


// Properties

 T __declspec(property(get=get_Current))  Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Collections::Generic::Stack_1<T> stack) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
 bool MoveNext() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 T get_Current() ;

/// @brief Method ThrowEnumerationNotStartedOrEnded addr 0x0 size 0xffffffffffffffff virtual false final false
 void ThrowEnumerationNotStartedOrEnded() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_Collections_IEnumerator_Reset() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: ::Enumerator
namespace System::Collections::Generic {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(3840))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3840), inst: 2 })
// CS Name: System.Collections.Generic.Stack`1::Enumerator
struct CORDL_TYPE System__Collections__Generic__Stack_1__Enumerator<T> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<T>
constexpr operator  System::Collections::Generic::IEnumerator_1<T>() const;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const;

// Ctor Parameters [CppParam { name: "_stack", ty: "System::Collections::Generic::Stack_1<T>", modifiers: "", def_value: None }, CppParam { name: "_version", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_currentElement", ty: "T", modifiers: "", def_value: None }]
constexpr System__Collections__Generic__Stack_1__Enumerator(System::Collections::Generic::Stack_1<T> _stack, int32_t _version, int32_t _index, T _currentElement) noexcept;


                    constexpr System__Collections__Generic__Stack_1__Enumerator(System__Collections__Generic__Stack_1__Enumerator const&) = default;
                    constexpr System__Collections__Generic__Stack_1__Enumerator(System__Collections__Generic__Stack_1__Enumerator&&) = default;
                    constexpr System__Collections__Generic__Stack_1__Enumerator& operator=(System__Collections__Generic__Stack_1__Enumerator const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr System__Collections__Generic__Stack_1__Enumerator& operator=(System__Collections__Generic__Stack_1__Enumerator&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x20};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit System__Collections__Generic__Stack_1__Enumerator(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 System::Collections::Generic::Stack_1<T> __declspec(property(get=__get__stack, put=__set__stack))  _stack;

constexpr void __set__stack(System::Collections::Generic::Stack_1<T> value) ;

constexpr System::Collections::Generic::Stack_1<T> __get__stack() const;

 int32_t __declspec(property(get=__get__version, put=__set__version))  _version;

constexpr void __set__version(int32_t value) ;

constexpr int32_t __get__version() const;

 int32_t __declspec(property(get=__get__index, put=__set__index))  _index;

constexpr void __set__index(int32_t value) ;

constexpr int32_t __get__index() const;

 T __declspec(property(get=__get__currentElement, put=__set__currentElement))  _currentElement;

constexpr void __set__currentElement(T value) ;

constexpr T __get__currentElement() const;


// Properties

 T __declspec(property(get=get_Current))  Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Collections::Generic::Stack_1<T> stack) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
 bool MoveNext() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 T get_Current() ;

/// @brief Method ThrowEnumerationNotStartedOrEnded addr 0x0 size 0xffffffffffffffff virtual false final false
 void ThrowEnumerationNotStartedOrEnded() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_Collections_IEnumerator_Reset() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::Stack`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3841))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3841), inst: 5866 })
// CS Name: System.Collections.Generic.Stack`1
class CORDL_TYPE Stack_1<System::Xml::Schema::System__Xml__Schema__SequenceNode__SequenceConstructPosContext> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using Enumerator = System::Collections::Generic::System__Collections__Generic__Stack_1__Enumerator<System::Xml::Schema::System__Xml__Schema__SequenceNode__SequenceConstructPosContext>;

/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<System::Xml::Schema::System__Xml__Schema__SequenceNode__SequenceConstructPosContext>
constexpr operator  System::Collections::Generic::IEnumerable_1<System::Xml::Schema::System__Xml__Schema__SequenceNode__SequenceConstructPosContext>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const noexcept;

/// @brief Convert operator to System::Collections::ICollection
constexpr operator  System::Collections::ICollection() const noexcept;

/// @brief Convert operator to System::Collections::Generic::IReadOnlyCollection_1<System::Xml::Schema::System__Xml__Schema__SequenceNode__SequenceConstructPosContext>
constexpr operator  System::Collections::Generic::IReadOnlyCollection_1<System::Xml::Schema::System__Xml__Schema__SequenceNode__SequenceConstructPosContext>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~Stack_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "Stack_1", modifiers: " const&", def_value: None }]
constexpr Stack_1(Stack_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Stack_1", modifiers: "&&", def_value: None }]
constexpr Stack_1(Stack_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Stack_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Stack_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Stack_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Stack_1& operator=(Stack_1&& o) noexcept = default;
  constexpr Stack_1& operator=(Stack_1 const& o) noexcept = default;
                


// Fields

 ::ArrayW<System::Xml::Schema::System__Xml__Schema__SequenceNode__SequenceConstructPosContext> __declspec(property(get=__get__array, put=__set__array))  _array;

constexpr void __set__array(::ArrayW<System::Xml::Schema::System__Xml__Schema__SequenceNode__SequenceConstructPosContext> value) ;

constexpr ::ArrayW<System::Xml::Schema::System__Xml__Schema__SequenceNode__SequenceConstructPosContext> __get__array() const;

 int32_t __declspec(property(get=__get__size, put=__set__size))  _size;

constexpr void __set__size(int32_t value) ;

constexpr int32_t __get__size() const;

 int32_t __declspec(property(get=__get__version, put=__set__version))  _version;

constexpr void __set__version(int32_t value) ;

constexpr int32_t __get__version() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get__syncRoot, put=__set__syncRoot))  _syncRoot;

constexpr void __set__syncRoot(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get__syncRoot() const;

/// @brief Field DefaultCapacity offset 0
static constexpr int32_t  DefaultCapacity{4};


// Properties

 int32_t __declspec(property(get=get_Count))  Count;

 bool __declspec(property(get=System_Collections_ICollection_get_IsSynchronized))  System_Collections_ICollection_IsSynchronized;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_ICollection_get_SyncRoot))  System_Collections_ICollection_SyncRoot;


// Methods

static System::Collections::Generic::Stack_1<System::Xml::Schema::System__Xml__Schema__SequenceNode__SequenceConstructPosContext> New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static System::Collections::Generic::Stack_1<System::Xml::Schema::System__Xml__Schema__SequenceNode__SequenceConstructPosContext> New_ctor(int32_t capacity) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(int32_t capacity) ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t get_Count() ;

/// @brief Method System.Collections.ICollection.get_IsSynchronized addr 0x0 size 0xffffffffffffffff virtual true final true
 bool System_Collections_ICollection_get_IsSynchronized() ;

/// @brief Method System.Collections.ICollection.get_SyncRoot addr 0x0 size 0xffffffffffffffff virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_ICollection_get_SyncRoot() ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
 void Clear() ;

/// @brief Method Contains addr 0x0 size 0xffffffffffffffff virtual false final false
 bool Contains(System::Xml::Schema::System__Xml__Schema__SequenceNode__SequenceConstructPosContext item) ;

/// @brief Method System.Collections.ICollection.CopyTo addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_Collections_ICollection_CopyTo(System::Array array, int32_t arrayIndex) ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::Generic::IEnumerator_1<System::Xml::Schema::System__Xml__Schema__SequenceNode__SequenceConstructPosContext> System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method Peek addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Xml::Schema::System__Xml__Schema__SequenceNode__SequenceConstructPosContext Peek() ;

/// @brief Method Pop addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Xml::Schema::System__Xml__Schema__SequenceNode__SequenceConstructPosContext Pop() ;

/// @brief Method Push addr 0x0 size 0xffffffffffffffff virtual false final false
 void Push(System::Xml::Schema::System__Xml__Schema__SequenceNode__SequenceConstructPosContext item) ;

/// @brief Method PushWithResize addr 0x0 size 0xffffffffffffffff virtual false final false
 void PushWithResize(System::Xml::Schema::System__Xml__Schema__SequenceNode__SequenceConstructPosContext item) ;

/// @brief Method ThrowForEmptyStack addr 0x0 size 0xffffffffffffffff virtual false final false
 void ThrowForEmptyStack() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::Stack`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3841))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3841), inst: 4862 })
// CS Name: System.Collections.Generic.Stack`1
class CORDL_TYPE Stack_1<UnityEngine::UIElements::UnityEngine__UIElements__StyleVariableResolver__ResolveContext> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using Enumerator = System::Collections::Generic::System__Collections__Generic__Stack_1__Enumerator<UnityEngine::UIElements::UnityEngine__UIElements__StyleVariableResolver__ResolveContext>;

/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<UnityEngine::UIElements::UnityEngine__UIElements__StyleVariableResolver__ResolveContext>
constexpr operator  System::Collections::Generic::IEnumerable_1<UnityEngine::UIElements::UnityEngine__UIElements__StyleVariableResolver__ResolveContext>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const noexcept;

/// @brief Convert operator to System::Collections::ICollection
constexpr operator  System::Collections::ICollection() const noexcept;

/// @brief Convert operator to System::Collections::Generic::IReadOnlyCollection_1<UnityEngine::UIElements::UnityEngine__UIElements__StyleVariableResolver__ResolveContext>
constexpr operator  System::Collections::Generic::IReadOnlyCollection_1<UnityEngine::UIElements::UnityEngine__UIElements__StyleVariableResolver__ResolveContext>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~Stack_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "Stack_1", modifiers: " const&", def_value: None }]
constexpr Stack_1(Stack_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Stack_1", modifiers: "&&", def_value: None }]
constexpr Stack_1(Stack_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Stack_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Stack_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Stack_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Stack_1& operator=(Stack_1&& o) noexcept = default;
  constexpr Stack_1& operator=(Stack_1 const& o) noexcept = default;
                


// Fields

 ::ArrayW<UnityEngine::UIElements::UnityEngine__UIElements__StyleVariableResolver__ResolveContext> __declspec(property(get=__get__array, put=__set__array))  _array;

constexpr void __set__array(::ArrayW<UnityEngine::UIElements::UnityEngine__UIElements__StyleVariableResolver__ResolveContext> value) ;

constexpr ::ArrayW<UnityEngine::UIElements::UnityEngine__UIElements__StyleVariableResolver__ResolveContext> __get__array() const;

 int32_t __declspec(property(get=__get__size, put=__set__size))  _size;

constexpr void __set__size(int32_t value) ;

constexpr int32_t __get__size() const;

 int32_t __declspec(property(get=__get__version, put=__set__version))  _version;

constexpr void __set__version(int32_t value) ;

constexpr int32_t __get__version() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get__syncRoot, put=__set__syncRoot))  _syncRoot;

constexpr void __set__syncRoot(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get__syncRoot() const;

/// @brief Field DefaultCapacity offset 0
static constexpr int32_t  DefaultCapacity{4};


// Properties

 int32_t __declspec(property(get=get_Count))  Count;

 bool __declspec(property(get=System_Collections_ICollection_get_IsSynchronized))  System_Collections_ICollection_IsSynchronized;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_ICollection_get_SyncRoot))  System_Collections_ICollection_SyncRoot;


// Methods

static System::Collections::Generic::Stack_1<UnityEngine::UIElements::UnityEngine__UIElements__StyleVariableResolver__ResolveContext> New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static System::Collections::Generic::Stack_1<UnityEngine::UIElements::UnityEngine__UIElements__StyleVariableResolver__ResolveContext> New_ctor(int32_t capacity) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(int32_t capacity) ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t get_Count() ;

/// @brief Method System.Collections.ICollection.get_IsSynchronized addr 0x0 size 0xffffffffffffffff virtual true final true
 bool System_Collections_ICollection_get_IsSynchronized() ;

/// @brief Method System.Collections.ICollection.get_SyncRoot addr 0x0 size 0xffffffffffffffff virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_ICollection_get_SyncRoot() ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
 void Clear() ;

/// @brief Method Contains addr 0x0 size 0xffffffffffffffff virtual false final false
 bool Contains(UnityEngine::UIElements::UnityEngine__UIElements__StyleVariableResolver__ResolveContext item) ;

/// @brief Method System.Collections.ICollection.CopyTo addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_Collections_ICollection_CopyTo(System::Array array, int32_t arrayIndex) ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::Generic::IEnumerator_1<UnityEngine::UIElements::UnityEngine__UIElements__StyleVariableResolver__ResolveContext> System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method Peek addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::UIElements::UnityEngine__UIElements__StyleVariableResolver__ResolveContext Peek() ;

/// @brief Method Pop addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::UIElements::UnityEngine__UIElements__StyleVariableResolver__ResolveContext Pop() ;

/// @brief Method Push addr 0x0 size 0xffffffffffffffff virtual false final false
 void Push(UnityEngine::UIElements::UnityEngine__UIElements__StyleVariableResolver__ResolveContext item) ;

/// @brief Method PushWithResize addr 0x0 size 0xffffffffffffffff virtual false final false
 void PushWithResize(UnityEngine::UIElements::UnityEngine__UIElements__StyleVariableResolver__ResolveContext item) ;

/// @brief Method ThrowForEmptyStack addr 0x0 size 0xffffffffffffffff virtual false final false
 void ThrowForEmptyStack() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::Stack`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3841))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3841), inst: 4861 })
// CS Name: System.Collections.Generic.Stack`1
class CORDL_TYPE Stack_1<UnityEngine::UIElements::UnityEngine__UIElements__EventDispatcher__DispatchContext> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using Enumerator = System::Collections::Generic::System__Collections__Generic__Stack_1__Enumerator<UnityEngine::UIElements::UnityEngine__UIElements__EventDispatcher__DispatchContext>;

/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<UnityEngine::UIElements::UnityEngine__UIElements__EventDispatcher__DispatchContext>
constexpr operator  System::Collections::Generic::IEnumerable_1<UnityEngine::UIElements::UnityEngine__UIElements__EventDispatcher__DispatchContext>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const noexcept;

/// @brief Convert operator to System::Collections::ICollection
constexpr operator  System::Collections::ICollection() const noexcept;

/// @brief Convert operator to System::Collections::Generic::IReadOnlyCollection_1<UnityEngine::UIElements::UnityEngine__UIElements__EventDispatcher__DispatchContext>
constexpr operator  System::Collections::Generic::IReadOnlyCollection_1<UnityEngine::UIElements::UnityEngine__UIElements__EventDispatcher__DispatchContext>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~Stack_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "Stack_1", modifiers: " const&", def_value: None }]
constexpr Stack_1(Stack_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Stack_1", modifiers: "&&", def_value: None }]
constexpr Stack_1(Stack_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Stack_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Stack_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Stack_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Stack_1& operator=(Stack_1&& o) noexcept = default;
  constexpr Stack_1& operator=(Stack_1 const& o) noexcept = default;
                


// Fields

 ::ArrayW<UnityEngine::UIElements::UnityEngine__UIElements__EventDispatcher__DispatchContext> __declspec(property(get=__get__array, put=__set__array))  _array;

constexpr void __set__array(::ArrayW<UnityEngine::UIElements::UnityEngine__UIElements__EventDispatcher__DispatchContext> value) ;

constexpr ::ArrayW<UnityEngine::UIElements::UnityEngine__UIElements__EventDispatcher__DispatchContext> __get__array() const;

 int32_t __declspec(property(get=__get__size, put=__set__size))  _size;

constexpr void __set__size(int32_t value) ;

constexpr int32_t __get__size() const;

 int32_t __declspec(property(get=__get__version, put=__set__version))  _version;

constexpr void __set__version(int32_t value) ;

constexpr int32_t __get__version() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get__syncRoot, put=__set__syncRoot))  _syncRoot;

constexpr void __set__syncRoot(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get__syncRoot() const;

/// @brief Field DefaultCapacity offset 0
static constexpr int32_t  DefaultCapacity{4};


// Properties

 int32_t __declspec(property(get=get_Count))  Count;

 bool __declspec(property(get=System_Collections_ICollection_get_IsSynchronized))  System_Collections_ICollection_IsSynchronized;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_ICollection_get_SyncRoot))  System_Collections_ICollection_SyncRoot;


// Methods

static System::Collections::Generic::Stack_1<UnityEngine::UIElements::UnityEngine__UIElements__EventDispatcher__DispatchContext> New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static System::Collections::Generic::Stack_1<UnityEngine::UIElements::UnityEngine__UIElements__EventDispatcher__DispatchContext> New_ctor(int32_t capacity) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(int32_t capacity) ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t get_Count() ;

/// @brief Method System.Collections.ICollection.get_IsSynchronized addr 0x0 size 0xffffffffffffffff virtual true final true
 bool System_Collections_ICollection_get_IsSynchronized() ;

/// @brief Method System.Collections.ICollection.get_SyncRoot addr 0x0 size 0xffffffffffffffff virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_ICollection_get_SyncRoot() ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
 void Clear() ;

/// @brief Method Contains addr 0x0 size 0xffffffffffffffff virtual false final false
 bool Contains(UnityEngine::UIElements::UnityEngine__UIElements__EventDispatcher__DispatchContext item) ;

/// @brief Method System.Collections.ICollection.CopyTo addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_Collections_ICollection_CopyTo(System::Array array, int32_t arrayIndex) ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::Generic::IEnumerator_1<UnityEngine::UIElements::UnityEngine__UIElements__EventDispatcher__DispatchContext> System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method Peek addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::UIElements::UnityEngine__UIElements__EventDispatcher__DispatchContext Peek() ;

/// @brief Method Pop addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::UIElements::UnityEngine__UIElements__EventDispatcher__DispatchContext Pop() ;

/// @brief Method Push addr 0x0 size 0xffffffffffffffff virtual false final false
 void Push(UnityEngine::UIElements::UnityEngine__UIElements__EventDispatcher__DispatchContext item) ;

/// @brief Method PushWithResize addr 0x0 size 0xffffffffffffffff virtual false final false
 void PushWithResize(UnityEngine::UIElements::UnityEngine__UIElements__EventDispatcher__DispatchContext item) ;

/// @brief Method ThrowForEmptyStack addr 0x0 size 0xffffffffffffffff virtual false final false
 void ThrowForEmptyStack() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::Stack`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3841))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3841), inst: 4860 })
// CS Name: System.Collections.Generic.Stack`1
class CORDL_TYPE Stack_1<UnityEngine::UIElements::StyleSheets::UnityEngine__UIElements__StyleSheets__BaseStyleMatcher__MatchContext> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using Enumerator = System::Collections::Generic::System__Collections__Generic__Stack_1__Enumerator<UnityEngine::UIElements::StyleSheets::UnityEngine__UIElements__StyleSheets__BaseStyleMatcher__MatchContext>;

/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<UnityEngine::UIElements::StyleSheets::UnityEngine__UIElements__StyleSheets__BaseStyleMatcher__MatchContext>
constexpr operator  System::Collections::Generic::IEnumerable_1<UnityEngine::UIElements::StyleSheets::UnityEngine__UIElements__StyleSheets__BaseStyleMatcher__MatchContext>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const noexcept;

/// @brief Convert operator to System::Collections::ICollection
constexpr operator  System::Collections::ICollection() const noexcept;

/// @brief Convert operator to System::Collections::Generic::IReadOnlyCollection_1<UnityEngine::UIElements::StyleSheets::UnityEngine__UIElements__StyleSheets__BaseStyleMatcher__MatchContext>
constexpr operator  System::Collections::Generic::IReadOnlyCollection_1<UnityEngine::UIElements::StyleSheets::UnityEngine__UIElements__StyleSheets__BaseStyleMatcher__MatchContext>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~Stack_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "Stack_1", modifiers: " const&", def_value: None }]
constexpr Stack_1(Stack_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Stack_1", modifiers: "&&", def_value: None }]
constexpr Stack_1(Stack_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Stack_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Stack_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Stack_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Stack_1& operator=(Stack_1&& o) noexcept = default;
  constexpr Stack_1& operator=(Stack_1 const& o) noexcept = default;
                


// Fields

 ::ArrayW<UnityEngine::UIElements::StyleSheets::UnityEngine__UIElements__StyleSheets__BaseStyleMatcher__MatchContext> __declspec(property(get=__get__array, put=__set__array))  _array;

constexpr void __set__array(::ArrayW<UnityEngine::UIElements::StyleSheets::UnityEngine__UIElements__StyleSheets__BaseStyleMatcher__MatchContext> value) ;

constexpr ::ArrayW<UnityEngine::UIElements::StyleSheets::UnityEngine__UIElements__StyleSheets__BaseStyleMatcher__MatchContext> __get__array() const;

 int32_t __declspec(property(get=__get__size, put=__set__size))  _size;

constexpr void __set__size(int32_t value) ;

constexpr int32_t __get__size() const;

 int32_t __declspec(property(get=__get__version, put=__set__version))  _version;

constexpr void __set__version(int32_t value) ;

constexpr int32_t __get__version() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get__syncRoot, put=__set__syncRoot))  _syncRoot;

constexpr void __set__syncRoot(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get__syncRoot() const;

/// @brief Field DefaultCapacity offset 0
static constexpr int32_t  DefaultCapacity{4};


// Properties

 int32_t __declspec(property(get=get_Count))  Count;

 bool __declspec(property(get=System_Collections_ICollection_get_IsSynchronized))  System_Collections_ICollection_IsSynchronized;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_ICollection_get_SyncRoot))  System_Collections_ICollection_SyncRoot;


// Methods

static System::Collections::Generic::Stack_1<UnityEngine::UIElements::StyleSheets::UnityEngine__UIElements__StyleSheets__BaseStyleMatcher__MatchContext> New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static System::Collections::Generic::Stack_1<UnityEngine::UIElements::StyleSheets::UnityEngine__UIElements__StyleSheets__BaseStyleMatcher__MatchContext> New_ctor(int32_t capacity) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(int32_t capacity) ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t get_Count() ;

/// @brief Method System.Collections.ICollection.get_IsSynchronized addr 0x0 size 0xffffffffffffffff virtual true final true
 bool System_Collections_ICollection_get_IsSynchronized() ;

/// @brief Method System.Collections.ICollection.get_SyncRoot addr 0x0 size 0xffffffffffffffff virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_ICollection_get_SyncRoot() ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
 void Clear() ;

/// @brief Method Contains addr 0x0 size 0xffffffffffffffff virtual false final false
 bool Contains(UnityEngine::UIElements::StyleSheets::UnityEngine__UIElements__StyleSheets__BaseStyleMatcher__MatchContext item) ;

/// @brief Method System.Collections.ICollection.CopyTo addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_Collections_ICollection_CopyTo(System::Array array, int32_t arrayIndex) ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::Generic::IEnumerator_1<UnityEngine::UIElements::StyleSheets::UnityEngine__UIElements__StyleSheets__BaseStyleMatcher__MatchContext> System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method Peek addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::UIElements::StyleSheets::UnityEngine__UIElements__StyleSheets__BaseStyleMatcher__MatchContext Peek() ;

/// @brief Method Pop addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::UIElements::StyleSheets::UnityEngine__UIElements__StyleSheets__BaseStyleMatcher__MatchContext Pop() ;

/// @brief Method Push addr 0x0 size 0xffffffffffffffff virtual false final false
 void Push(UnityEngine::UIElements::StyleSheets::UnityEngine__UIElements__StyleSheets__BaseStyleMatcher__MatchContext item) ;

/// @brief Method PushWithResize addr 0x0 size 0xffffffffffffffff virtual false final false
 void PushWithResize(UnityEngine::UIElements::StyleSheets::UnityEngine__UIElements__StyleSheets__BaseStyleMatcher__MatchContext item) ;

/// @brief Method ThrowForEmptyStack addr 0x0 size 0xffffffffffffffff virtual false final false
 void ThrowForEmptyStack() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::Stack`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3841))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3841), inst: 4859 })
// CS Name: System.Collections.Generic.Stack`1
class CORDL_TYPE Stack_1<UnityEngine::UIElements::TextureId> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using Enumerator = System::Collections::Generic::System__Collections__Generic__Stack_1__Enumerator<UnityEngine::UIElements::TextureId>;

/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<UnityEngine::UIElements::TextureId>
constexpr operator  System::Collections::Generic::IEnumerable_1<UnityEngine::UIElements::TextureId>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const noexcept;

/// @brief Convert operator to System::Collections::ICollection
constexpr operator  System::Collections::ICollection() const noexcept;

/// @brief Convert operator to System::Collections::Generic::IReadOnlyCollection_1<UnityEngine::UIElements::TextureId>
constexpr operator  System::Collections::Generic::IReadOnlyCollection_1<UnityEngine::UIElements::TextureId>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~Stack_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "Stack_1", modifiers: " const&", def_value: None }]
constexpr Stack_1(Stack_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Stack_1", modifiers: "&&", def_value: None }]
constexpr Stack_1(Stack_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Stack_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Stack_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Stack_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Stack_1& operator=(Stack_1&& o) noexcept = default;
  constexpr Stack_1& operator=(Stack_1 const& o) noexcept = default;
                


// Fields

 ::ArrayW<UnityEngine::UIElements::TextureId> __declspec(property(get=__get__array, put=__set__array))  _array;

constexpr void __set__array(::ArrayW<UnityEngine::UIElements::TextureId> value) ;

constexpr ::ArrayW<UnityEngine::UIElements::TextureId> __get__array() const;

 int32_t __declspec(property(get=__get__size, put=__set__size))  _size;

constexpr void __set__size(int32_t value) ;

constexpr int32_t __get__size() const;

 int32_t __declspec(property(get=__get__version, put=__set__version))  _version;

constexpr void __set__version(int32_t value) ;

constexpr int32_t __get__version() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get__syncRoot, put=__set__syncRoot))  _syncRoot;

constexpr void __set__syncRoot(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get__syncRoot() const;

/// @brief Field DefaultCapacity offset 0
static constexpr int32_t  DefaultCapacity{4};


// Properties

 int32_t __declspec(property(get=get_Count))  Count;

 bool __declspec(property(get=System_Collections_ICollection_get_IsSynchronized))  System_Collections_ICollection_IsSynchronized;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_ICollection_get_SyncRoot))  System_Collections_ICollection_SyncRoot;


// Methods

static System::Collections::Generic::Stack_1<UnityEngine::UIElements::TextureId> New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static System::Collections::Generic::Stack_1<UnityEngine::UIElements::TextureId> New_ctor(int32_t capacity) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(int32_t capacity) ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t get_Count() ;

/// @brief Method System.Collections.ICollection.get_IsSynchronized addr 0x0 size 0xffffffffffffffff virtual true final true
 bool System_Collections_ICollection_get_IsSynchronized() ;

/// @brief Method System.Collections.ICollection.get_SyncRoot addr 0x0 size 0xffffffffffffffff virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_ICollection_get_SyncRoot() ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
 void Clear() ;

/// @brief Method Contains addr 0x0 size 0xffffffffffffffff virtual false final false
 bool Contains(UnityEngine::UIElements::TextureId item) ;

/// @brief Method System.Collections.ICollection.CopyTo addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_Collections_ICollection_CopyTo(System::Array array, int32_t arrayIndex) ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::Generic::IEnumerator_1<UnityEngine::UIElements::TextureId> System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method Peek addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::UIElements::TextureId Peek() ;

/// @brief Method Pop addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::UIElements::TextureId Pop() ;

/// @brief Method Push addr 0x0 size 0xffffffffffffffff virtual false final false
 void Push(UnityEngine::UIElements::TextureId item) ;

/// @brief Method PushWithResize addr 0x0 size 0xffffffffffffffff virtual false final false
 void PushWithResize(UnityEngine::UIElements::TextureId item) ;

/// @brief Method ThrowForEmptyStack addr 0x0 size 0xffffffffffffffff virtual false final false
 void ThrowForEmptyStack() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::Stack`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3841))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3841), inst: 4825 })
// CS Name: System.Collections.Generic.Stack`1
class CORDL_TYPE Stack_1<System::Int32Enum> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using Enumerator = System::Collections::Generic::System__Collections__Generic__Stack_1__Enumerator<System::Int32Enum>;

/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<System::Int32Enum>
constexpr operator  System::Collections::Generic::IEnumerable_1<System::Int32Enum>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const noexcept;

/// @brief Convert operator to System::Collections::ICollection
constexpr operator  System::Collections::ICollection() const noexcept;

/// @brief Convert operator to System::Collections::Generic::IReadOnlyCollection_1<System::Int32Enum>
constexpr operator  System::Collections::Generic::IReadOnlyCollection_1<System::Int32Enum>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~Stack_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "Stack_1", modifiers: " const&", def_value: None }]
constexpr Stack_1(Stack_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Stack_1", modifiers: "&&", def_value: None }]
constexpr Stack_1(Stack_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Stack_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Stack_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Stack_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Stack_1& operator=(Stack_1&& o) noexcept = default;
  constexpr Stack_1& operator=(Stack_1 const& o) noexcept = default;
                


// Fields

 ::ArrayW<System::Int32Enum> __declspec(property(get=__get__array, put=__set__array))  _array;

constexpr void __set__array(::ArrayW<System::Int32Enum> value) ;

constexpr ::ArrayW<System::Int32Enum> __get__array() const;

 int32_t __declspec(property(get=__get__size, put=__set__size))  _size;

constexpr void __set__size(int32_t value) ;

constexpr int32_t __get__size() const;

 int32_t __declspec(property(get=__get__version, put=__set__version))  _version;

constexpr void __set__version(int32_t value) ;

constexpr int32_t __get__version() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get__syncRoot, put=__set__syncRoot))  _syncRoot;

constexpr void __set__syncRoot(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get__syncRoot() const;

/// @brief Field DefaultCapacity offset 0
static constexpr int32_t  DefaultCapacity{4};


// Properties

 int32_t __declspec(property(get=get_Count))  Count;

 bool __declspec(property(get=System_Collections_ICollection_get_IsSynchronized))  System_Collections_ICollection_IsSynchronized;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_ICollection_get_SyncRoot))  System_Collections_ICollection_SyncRoot;


// Methods

static System::Collections::Generic::Stack_1<System::Int32Enum> New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static System::Collections::Generic::Stack_1<System::Int32Enum> New_ctor(int32_t capacity) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(int32_t capacity) ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t get_Count() ;

/// @brief Method System.Collections.ICollection.get_IsSynchronized addr 0x0 size 0xffffffffffffffff virtual true final true
 bool System_Collections_ICollection_get_IsSynchronized() ;

/// @brief Method System.Collections.ICollection.get_SyncRoot addr 0x0 size 0xffffffffffffffff virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_ICollection_get_SyncRoot() ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
 void Clear() ;

/// @brief Method Contains addr 0x0 size 0xffffffffffffffff virtual false final false
 bool Contains(System::Int32Enum item) ;

/// @brief Method System.Collections.ICollection.CopyTo addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_Collections_ICollection_CopyTo(System::Array array, int32_t arrayIndex) ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::Generic::IEnumerator_1<System::Int32Enum> System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method Peek addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Int32Enum Peek() ;

/// @brief Method Pop addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Int32Enum Pop() ;

/// @brief Method Push addr 0x0 size 0xffffffffffffffff virtual false final false
 void Push(System::Int32Enum item) ;

/// @brief Method PushWithResize addr 0x0 size 0xffffffffffffffff virtual false final false
 void PushWithResize(System::Int32Enum item) ;

/// @brief Method ThrowForEmptyStack addr 0x0 size 0xffffffffffffffff virtual false final false
 void ThrowForEmptyStack() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::Stack`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3841))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3841), inst: 3225 })
// CS Name: System.Collections.Generic.Stack`1
class CORDL_TYPE Stack_1<UnityEngine::Rect> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using Enumerator = System::Collections::Generic::System__Collections__Generic__Stack_1__Enumerator<UnityEngine::Rect>;

/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<UnityEngine::Rect>
constexpr operator  System::Collections::Generic::IEnumerable_1<UnityEngine::Rect>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const noexcept;

/// @brief Convert operator to System::Collections::ICollection
constexpr operator  System::Collections::ICollection() const noexcept;

/// @brief Convert operator to System::Collections::Generic::IReadOnlyCollection_1<UnityEngine::Rect>
constexpr operator  System::Collections::Generic::IReadOnlyCollection_1<UnityEngine::Rect>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~Stack_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "Stack_1", modifiers: " const&", def_value: None }]
constexpr Stack_1(Stack_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Stack_1", modifiers: "&&", def_value: None }]
constexpr Stack_1(Stack_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Stack_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Stack_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Stack_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Stack_1& operator=(Stack_1&& o) noexcept = default;
  constexpr Stack_1& operator=(Stack_1 const& o) noexcept = default;
                


// Fields

 ::ArrayW<UnityEngine::Rect> __declspec(property(get=__get__array, put=__set__array))  _array;

constexpr void __set__array(::ArrayW<UnityEngine::Rect> value) ;

constexpr ::ArrayW<UnityEngine::Rect> __get__array() const;

 int32_t __declspec(property(get=__get__size, put=__set__size))  _size;

constexpr void __set__size(int32_t value) ;

constexpr int32_t __get__size() const;

 int32_t __declspec(property(get=__get__version, put=__set__version))  _version;

constexpr void __set__version(int32_t value) ;

constexpr int32_t __get__version() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get__syncRoot, put=__set__syncRoot))  _syncRoot;

constexpr void __set__syncRoot(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get__syncRoot() const;

/// @brief Field DefaultCapacity offset 0
static constexpr int32_t  DefaultCapacity{4};


// Properties

 int32_t __declspec(property(get=get_Count))  Count;

 bool __declspec(property(get=System_Collections_ICollection_get_IsSynchronized))  System_Collections_ICollection_IsSynchronized;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_ICollection_get_SyncRoot))  System_Collections_ICollection_SyncRoot;


// Methods

static System::Collections::Generic::Stack_1<UnityEngine::Rect> New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static System::Collections::Generic::Stack_1<UnityEngine::Rect> New_ctor(int32_t capacity) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(int32_t capacity) ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t get_Count() ;

/// @brief Method System.Collections.ICollection.get_IsSynchronized addr 0x0 size 0xffffffffffffffff virtual true final true
 bool System_Collections_ICollection_get_IsSynchronized() ;

/// @brief Method System.Collections.ICollection.get_SyncRoot addr 0x0 size 0xffffffffffffffff virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_ICollection_get_SyncRoot() ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
 void Clear() ;

/// @brief Method Contains addr 0x0 size 0xffffffffffffffff virtual false final false
 bool Contains(UnityEngine::Rect item) ;

/// @brief Method System.Collections.ICollection.CopyTo addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_Collections_ICollection_CopyTo(System::Array array, int32_t arrayIndex) ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::Generic::IEnumerator_1<UnityEngine::Rect> System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method Peek addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::Rect Peek() ;

/// @brief Method Pop addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::Rect Pop() ;

/// @brief Method Push addr 0x0 size 0xffffffffffffffff virtual false final false
 void Push(UnityEngine::Rect item) ;

/// @brief Method PushWithResize addr 0x0 size 0xffffffffffffffff virtual false final false
 void PushWithResize(UnityEngine::Rect item) ;

/// @brief Method ThrowForEmptyStack addr 0x0 size 0xffffffffffffffff virtual false final false
 void ThrowForEmptyStack() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::Stack`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3841))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3841), inst: 3205 })
// CS Name: System.Collections.Generic.Stack`1
class CORDL_TYPE Stack_1<UnityEngine::Matrix4x4> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using Enumerator = System::Collections::Generic::System__Collections__Generic__Stack_1__Enumerator<UnityEngine::Matrix4x4>;

/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<UnityEngine::Matrix4x4>
constexpr operator  System::Collections::Generic::IEnumerable_1<UnityEngine::Matrix4x4>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const noexcept;

/// @brief Convert operator to System::Collections::ICollection
constexpr operator  System::Collections::ICollection() const noexcept;

/// @brief Convert operator to System::Collections::Generic::IReadOnlyCollection_1<UnityEngine::Matrix4x4>
constexpr operator  System::Collections::Generic::IReadOnlyCollection_1<UnityEngine::Matrix4x4>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~Stack_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "Stack_1", modifiers: " const&", def_value: None }]
constexpr Stack_1(Stack_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Stack_1", modifiers: "&&", def_value: None }]
constexpr Stack_1(Stack_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Stack_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Stack_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Stack_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Stack_1& operator=(Stack_1&& o) noexcept = default;
  constexpr Stack_1& operator=(Stack_1 const& o) noexcept = default;
                


// Fields

 ::ArrayW<UnityEngine::Matrix4x4> __declspec(property(get=__get__array, put=__set__array))  _array;

constexpr void __set__array(::ArrayW<UnityEngine::Matrix4x4> value) ;

constexpr ::ArrayW<UnityEngine::Matrix4x4> __get__array() const;

 int32_t __declspec(property(get=__get__size, put=__set__size))  _size;

constexpr void __set__size(int32_t value) ;

constexpr int32_t __get__size() const;

 int32_t __declspec(property(get=__get__version, put=__set__version))  _version;

constexpr void __set__version(int32_t value) ;

constexpr int32_t __get__version() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get__syncRoot, put=__set__syncRoot))  _syncRoot;

constexpr void __set__syncRoot(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get__syncRoot() const;

/// @brief Field DefaultCapacity offset 0
static constexpr int32_t  DefaultCapacity{4};


// Properties

 int32_t __declspec(property(get=get_Count))  Count;

 bool __declspec(property(get=System_Collections_ICollection_get_IsSynchronized))  System_Collections_ICollection_IsSynchronized;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_ICollection_get_SyncRoot))  System_Collections_ICollection_SyncRoot;


// Methods

static System::Collections::Generic::Stack_1<UnityEngine::Matrix4x4> New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static System::Collections::Generic::Stack_1<UnityEngine::Matrix4x4> New_ctor(int32_t capacity) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(int32_t capacity) ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t get_Count() ;

/// @brief Method System.Collections.ICollection.get_IsSynchronized addr 0x0 size 0xffffffffffffffff virtual true final true
 bool System_Collections_ICollection_get_IsSynchronized() ;

/// @brief Method System.Collections.ICollection.get_SyncRoot addr 0x0 size 0xffffffffffffffff virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_ICollection_get_SyncRoot() ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
 void Clear() ;

/// @brief Method Contains addr 0x0 size 0xffffffffffffffff virtual false final false
 bool Contains(UnityEngine::Matrix4x4 item) ;

/// @brief Method System.Collections.ICollection.CopyTo addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_Collections_ICollection_CopyTo(System::Array array, int32_t arrayIndex) ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::Generic::IEnumerator_1<UnityEngine::Matrix4x4> System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method Peek addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::Matrix4x4 Peek() ;

/// @brief Method Pop addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::Matrix4x4 Pop() ;

/// @brief Method Push addr 0x0 size 0xffffffffffffffff virtual false final false
 void Push(UnityEngine::Matrix4x4 item) ;

/// @brief Method PushWithResize addr 0x0 size 0xffffffffffffffff virtual false final false
 void PushWithResize(UnityEngine::Matrix4x4 item) ;

/// @brief Method ThrowForEmptyStack addr 0x0 size 0xffffffffffffffff virtual false final false
 void ThrowForEmptyStack() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::Stack`1
namespace System::Collections::Generic {
// cpp template
template<::cordl_internals::is_or_is_backed_by<int32_t> T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3841))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3841), inst: 92 })
// CS Name: System.Collections.Generic.Stack`1
class CORDL_TYPE Stack_1<T> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using Enumerator = System::Collections::Generic::System__Collections__Generic__Stack_1__Enumerator<T>;

/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<T>
constexpr operator  System::Collections::Generic::IEnumerable_1<T>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const noexcept;

/// @brief Convert operator to System::Collections::ICollection
constexpr operator  System::Collections::ICollection() const noexcept;

/// @brief Convert operator to System::Collections::Generic::IReadOnlyCollection_1<T>
constexpr operator  System::Collections::Generic::IReadOnlyCollection_1<T>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~Stack_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "Stack_1", modifiers: " const&", def_value: None }]
constexpr Stack_1(Stack_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Stack_1", modifiers: "&&", def_value: None }]
constexpr Stack_1(Stack_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Stack_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Stack_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Stack_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Stack_1& operator=(Stack_1&& o) noexcept = default;
  constexpr Stack_1& operator=(Stack_1 const& o) noexcept = default;
                


// Fields

 ::ArrayW<T> __declspec(property(get=__get__array, put=__set__array))  _array;

constexpr void __set__array(::ArrayW<T> value) ;

constexpr ::ArrayW<T> __get__array() const;

 int32_t __declspec(property(get=__get__size, put=__set__size))  _size;

constexpr void __set__size(int32_t value) ;

constexpr int32_t __get__size() const;

 int32_t __declspec(property(get=__get__version, put=__set__version))  _version;

constexpr void __set__version(int32_t value) ;

constexpr int32_t __get__version() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get__syncRoot, put=__set__syncRoot))  _syncRoot;

constexpr void __set__syncRoot(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get__syncRoot() const;

/// @brief Field DefaultCapacity offset 0
static constexpr int32_t  DefaultCapacity{4};


// Properties

 int32_t __declspec(property(get=get_Count))  Count;

 bool __declspec(property(get=System_Collections_ICollection_get_IsSynchronized))  System_Collections_ICollection_IsSynchronized;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_ICollection_get_SyncRoot))  System_Collections_ICollection_SyncRoot;


// Methods

static System::Collections::Generic::Stack_1<T> New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static System::Collections::Generic::Stack_1<T> New_ctor(int32_t capacity) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(int32_t capacity) ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t get_Count() ;

/// @brief Method System.Collections.ICollection.get_IsSynchronized addr 0x0 size 0xffffffffffffffff virtual true final true
 bool System_Collections_ICollection_get_IsSynchronized() ;

/// @brief Method System.Collections.ICollection.get_SyncRoot addr 0x0 size 0xffffffffffffffff virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_ICollection_get_SyncRoot() ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
 void Clear() ;

/// @brief Method Contains addr 0x0 size 0xffffffffffffffff virtual false final false
 bool Contains(T item) ;

/// @brief Method System.Collections.ICollection.CopyTo addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_Collections_ICollection_CopyTo(System::Array array, int32_t arrayIndex) ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::Generic::IEnumerator_1<T> System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method Peek addr 0x0 size 0xffffffffffffffff virtual false final false
 T Peek() ;

/// @brief Method Pop addr 0x0 size 0xffffffffffffffff virtual false final false
 T Pop() ;

/// @brief Method Push addr 0x0 size 0xffffffffffffffff virtual false final false
 void Push(T item) ;

/// @brief Method PushWithResize addr 0x0 size 0xffffffffffffffff virtual false final false
 void PushWithResize(T item) ;

/// @brief Method ThrowForEmptyStack addr 0x0 size 0xffffffffffffffff virtual false final false
 void ThrowForEmptyStack() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::Stack`1
namespace System::Collections::Generic {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3841))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3841), inst: 2 })
// CS Name: System.Collections.Generic.Stack`1
class CORDL_TYPE Stack_1<T> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using Enumerator = System::Collections::Generic::System__Collections__Generic__Stack_1__Enumerator<T>;

/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<T>
constexpr operator  System::Collections::Generic::IEnumerable_1<T>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const noexcept;

/// @brief Convert operator to System::Collections::ICollection
constexpr operator  System::Collections::ICollection() const noexcept;

/// @brief Convert operator to System::Collections::Generic::IReadOnlyCollection_1<T>
constexpr operator  System::Collections::Generic::IReadOnlyCollection_1<T>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~Stack_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "Stack_1", modifiers: " const&", def_value: None }]
constexpr Stack_1(Stack_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Stack_1", modifiers: "&&", def_value: None }]
constexpr Stack_1(Stack_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Stack_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Stack_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Stack_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Stack_1& operator=(Stack_1&& o) noexcept = default;
  constexpr Stack_1& operator=(Stack_1 const& o) noexcept = default;
                


// Fields

 ::ArrayW<T> __declspec(property(get=__get__array, put=__set__array))  _array;

constexpr void __set__array(::ArrayW<T> value) ;

constexpr ::ArrayW<T> __get__array() const;

 int32_t __declspec(property(get=__get__size, put=__set__size))  _size;

constexpr void __set__size(int32_t value) ;

constexpr int32_t __get__size() const;

 int32_t __declspec(property(get=__get__version, put=__set__version))  _version;

constexpr void __set__version(int32_t value) ;

constexpr int32_t __get__version() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get__syncRoot, put=__set__syncRoot))  _syncRoot;

constexpr void __set__syncRoot(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get__syncRoot() const;

/// @brief Field DefaultCapacity offset 0
static constexpr int32_t  DefaultCapacity{4};


// Properties

 int32_t __declspec(property(get=get_Count))  Count;

 bool __declspec(property(get=System_Collections_ICollection_get_IsSynchronized))  System_Collections_ICollection_IsSynchronized;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_ICollection_get_SyncRoot))  System_Collections_ICollection_SyncRoot;


// Methods

static System::Collections::Generic::Stack_1<T> New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static System::Collections::Generic::Stack_1<T> New_ctor(int32_t capacity) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(int32_t capacity) ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t get_Count() ;

/// @brief Method System.Collections.ICollection.get_IsSynchronized addr 0x0 size 0xffffffffffffffff virtual true final true
 bool System_Collections_ICollection_get_IsSynchronized() ;

/// @brief Method System.Collections.ICollection.get_SyncRoot addr 0x0 size 0xffffffffffffffff virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_ICollection_get_SyncRoot() ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
 void Clear() ;

/// @brief Method Contains addr 0x0 size 0xffffffffffffffff virtual false final false
 bool Contains(T item) ;

/// @brief Method System.Collections.ICollection.CopyTo addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_Collections_ICollection_CopyTo(System::Array array, int32_t arrayIndex) ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::Generic::IEnumerator_1<T> System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method Peek addr 0x0 size 0xffffffffffffffff virtual false final false
 T Peek() ;

/// @brief Method Pop addr 0x0 size 0xffffffffffffffff virtual false final false
 T Pop() ;

/// @brief Method Push addr 0x0 size 0xffffffffffffffff virtual false final false
 void Push(T item) ;

/// @brief Method PushWithResize addr 0x0 size 0xffffffffffffffff virtual false final false
 void PushWithResize(T item) ;

/// @brief Method ThrowForEmptyStack addr 0x0 size 0xffffffffffffffff virtual false final false
 void ThrowForEmptyStack() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Collections::Generic::Stack_1, "System.Collections.Generic", "Stack`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(System::Collections::Generic::System__Collections__Generic__Stack_1__Enumerator, "System.Collections.Generic", "Stack`1/Enumerator");
